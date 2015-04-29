import numpy as np
import numpy.random as rng
import matplotlib.pyplot as plt

# Number of data points
N = 101

# Standard deviation of measurement noise
sigma = np.ones(N)

# Standard deviation of the prior for amplitudes
delta = 2.

# Time limits
t_min = 0.
t_max = 100.

# Limits for prior on frequency
nu_min = 1./(t_max - t_min)
nu_max = 1E3*nu_min

def generate(t):
  """
  Generate amplitudes, frequency, and data from the joint prior.
  """
  A, B = delta*rng.randn(2)
  nu = np.exp(np.log(nu_min) + np.log(nu_max/nu_min)*rng.rand())

  y = A*np.sin(2.*np.pi*nu*t) + B*np.cos(2.*np.pi*nu*t) + sigma*rng.rand(len(t))

  return [A, B, nu, y]



if __name__ == '__main__':

  t = np.linspace(t_min, t_max, N)
  A, B, nu, y = generate(t)

  plt.plot(t, y, 'bo')
  plt.show()

