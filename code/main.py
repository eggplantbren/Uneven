import numpy as np
import numpy.random as rng
import matplotlib.pyplot as plt

# Number of data points
N = 100

# Standard deviation of measurement noise
sigma = np.ones(N)

# Standard deviation of the prior for amplitudes
delta = 5.

# Time limits
t_min = 0.
t_max = 100.

def generate():
  """
  Generate amplitudes, frequency, and data from the joint prior.
  """
  A, B = delta*rng.randn(2)
  return [A, B]


