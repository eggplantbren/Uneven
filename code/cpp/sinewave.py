import os
import numpy as np
import numpy.random as rng
import matplotlib.pyplot as plt
import dnest4.builder as bd
import dnest4.classic as dn4

f = open("information.txt", "w")

for i in range(0, 10000):
    # Generate a dataset from the prior
    data = {}
    data["N"] = 101

    # Even grid
    data["t"] = np.linspace(0.0, 1.0, data["N"])
    # Even grid results from 84 repetitions
    # mean(information) = 10.528
    # std(information)/sqrt(len(information)) = 0.323

    # Uneven grid
    # data["t"] = rng.rand(data["N"])

    A, P, phi = 5*rng.randn(), rng.rand(), 2*np.pi*rng.rand()
    data["y"] = A*np.sin(2*np.pi*data["t"]/P + phi) + rng.randn(data["N"])

    # Create model
    model = bd.Model()

    # Sinusoid parameters
    model.add_node(bd.Node("A", bd.Normal(0.0, 5.0)))
    model.add_node(bd.Node("P", bd.Uniform(0.0, 1.0)))
    model.add_node(bd.Node("phi", bd.Uniform(0.0, 2.0*np.pi)))

    # Data nodes
    for i in range(0, data["N"]):
        name = "y{i}".format(i=i)
        mean = "A*sin(2*M_PI*t{i}/P + phi)".format(i=i)
        model.add_node(bd.Node(name, bd.Normal(mean, 1.0), observed=True))

    # Create the C++ code
    bd.generate_h(model, data)
    bd.generate_cpp(model, data)

    # Compile the C++ code so it's ready to go
    os.system("make")
    os.system("nice -n19 ./main")

    f.write(str(dn4.postprocess(plot=False)[1]) + "\n")
    f.flush()

f.close()

