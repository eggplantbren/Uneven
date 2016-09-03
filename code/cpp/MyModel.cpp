#include "MyModel.h"
#include "DNest4/code/DNest4.h"

using namespace std;
using namespace DNest4;

// Static dataset
std::vector<double> MyModel::t;
std::vector<double> MyModel::y;

void MyModel::generate_data(RNG& rng, size_t n)
{
    t.resize(n);
    y.resize(n);

    MyModel temp;
    temp.from_prior(rng);

    for(size_t i=0; i<n; ++i)
    {
        t[i] = static_cast<double>(i);
        y[i] = temp.A*sin(2*M_PI*t[i]/temp.P + temp.phi);
        y[i] += rng.randn();
    }
}

MyModel::MyModel()
:n(y.size())
{

}

void MyModel::from_prior(RNG& rng)
{
    A = rng.randn();
    P = 100*rng.rand();
    phi = 2*M_PI*rng.rand();
    for(double& nn: n)
        nn = rng.randn();
}

double MyModel::perturb(RNG& rng)
{
	double logH = 0.0;

    int which1, which2;

    which1 = rng.rand_int(2);
    if(which1 == 0)
    {
        which2 = rng.rand_int(3);
        if(which2 == 0)
        {

        }
        else if(which2 == 1)
        {

        }
        else
        {

        }
    }
    else
    {

    }

	return logH;
}

double MyModel::log_likelihood() const
{
	double logL = 0.;
	return logL;
}

void MyModel::print(std::ostream& out) const
{

}

string MyModel::description() const
{
	return string("");
}

