#ifndef DNest4_Template_MyModel
#define DNest4_Template_MyModel

#include "DNest4/code/DNest4.h"
#include <ostream>

class MyModel
{
	private:
        // Dataset
        static std::vector<double> t, y;
        static void generate_data(DNest4::RNG& rng, size_t n=101);

        // Sinusoid parameters
        double A, P, phi;

        // Latent parameters for fantasy data
        std::vector<double> n;

	public:
		// Constructor only gives size of params
		MyModel();

		// Generate the point from the prior
		void from_prior(DNest4::RNG& rng);

		// Metropolis-Hastings proposals
		double perturb(DNest4::RNG& rng);

		// Likelihood function
		double log_likelihood() const;

		// Print to stream
		void print(std::ostream& out) const;

		// Return string with column information
		std::string description() const;
};

#endif

