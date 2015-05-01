import numpy as np
import numpy.random as rng
import matplotlib.pyplot as plt
import scipy.linalg as la

# Number of data points
N = 101

# Standard deviation of measurement noise
sigma = np.ones(N)

# Standard deviation of the prior for amplitudes
delta = 1.

# Time limits
t_min = 0.
t_max = 100.

# Limits for prior on frequency
nu_min = 1./(t_max - t_min)
nu_max = nu_min*(0.5*N)

def generate(t):
  """
  Generate amplitudes, frequency, and data from the joint prior.
  """
  A, B = delta*rng.randn(2)
  nu = np.exp(np.log(nu_min) + np.log(nu_max/nu_min)*rng.rand())

  y = A*np.sin(2.*np.pi*nu*t) + B*np.cos(2.*np.pi*nu*t) + sigma*rng.randn(len(t))

  return [A, B, nu, y]



if __name__ == '__main__':
  # Timestamps: uniform strategy
  t = np.linspace(t_min, t_max, N)

  # Timestamps: random strategy
  #t = t_min + (t_max - t_min)*np.rand(N)

  # Generate parameters and data
  A, B, nu_true, y = generate(t)

  plt.plot(t, y, 'bo')
  plt.show()

  # Calculate the marginal posterior for log(nu) (flat prior)
  log_nu = np.linspace(np.log(nu_min), np.log(nu_max), 30001)
  nu = np.exp(log_nu)
  logp = np.zeros(nu.size)

  for i in xrange(0, len(nu)):
    # Model basis functions
    S = np.sin(2.*np.pi*nu[i]*t)
    C = np.cos(2.*np.pi*nu[i]*t)

    f = np.zeros(2)
    g = np.zeros((2, 2))
    f[0] = (S*y).sum()
    f[1] = (C*y).sum()

    g[0, 0] = (S*S).sum()
    g[0, 1] = (S*C).sum()
    g[1, 0] = g[0, 1]
    g[1, 1] = (C*C).sum()

    g2 = g + np.eye(2)/delta**2
    cho = la.cho_factor(g2) 
    logp[i] = 0.5*np.dot(f, la.cho_solve(cho, f)) - np.sum(np.log(np.diag(cho[0])))

  # Normalise posterior
  logp = logp - logp.max()
  Z = np.trapz(np.exp(logp), x=log_nu)
  p = np.exp(logp)/Z
  logp -= np.log(Z)

  # Calculate information
  H = np.trapz(p*(logp - np.log(1./(np.log(nu_max) - np.log(nu_min)))), x=log_nu)

  plt.plot(log_nu, p)
  plt.axvline(np.log(nu_true), color='r')
  plt.title('H = ' + str(H))
  plt.show()

