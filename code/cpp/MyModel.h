#ifndef DNest4_Builder_MyModel
#define DNest4_Builder_MyModel

#include "DNest4/code/DNest4.h"
#include <ostream>
#include <vector>

class MyModel
{
    private:
double _A, A;
double _P, P;
double _phi, phi;
static const double t0;
static const double t1;
static const double t2;
static const double t3;
static const double t4;
static const double t5;
static const double t6;
static const double t7;
static const double t8;
static const double t9;
static const double t10;
static const double t11;
static const double t12;
static const double t13;
static const double t14;
static const double t15;
static const double t16;
static const double t17;
static const double t18;
static const double t19;
static const double t20;
static const double t21;
static const double t22;
static const double t23;
static const double t24;
static const double t25;
static const double t26;
static const double t27;
static const double t28;
static const double t29;
static const double t30;
static const double t31;
static const double t32;
static const double t33;
static const double t34;
static const double t35;
static const double t36;
static const double t37;
static const double t38;
static const double t39;
static const double t40;
static const double t41;
static const double t42;
static const double t43;
static const double t44;
static const double t45;
static const double t46;
static const double t47;
static const double t48;
static const double t49;
static const double t50;
static const double t51;
static const double t52;
static const double t53;
static const double t54;
static const double t55;
static const double t56;
static const double t57;
static const double t58;
static const double t59;
static const double t60;
static const double t61;
static const double t62;
static const double t63;
static const double t64;
static const double t65;
static const double t66;
static const double t67;
static const double t68;
static const double t69;
static const double t70;
static const double t71;
static const double t72;
static const double t73;
static const double t74;
static const double t75;
static const double t76;
static const double t77;
static const double t78;
static const double t79;
static const double t80;
static const double t81;
static const double t82;
static const double t83;
static const double t84;
static const double t85;
static const double t86;
static const double t87;
static const double t88;
static const double t89;
static const double t90;
static const double t91;
static const double t92;
static const double t93;
static const double t94;
static const double t95;
static const double t96;
static const double t97;
static const double t98;
static const double t99;
static const double t100;
static const double y0;
static const double y1;
static const double y2;
static const double y3;
static const double y4;
static const double y5;
static const double y6;
static const double y7;
static const double y8;
static const double y9;
static const double y10;
static const double y11;
static const double y12;
static const double y13;
static const double y14;
static const double y15;
static const double y16;
static const double y17;
static const double y18;
static const double y19;
static const double y20;
static const double y21;
static const double y22;
static const double y23;
static const double y24;
static const double y25;
static const double y26;
static const double y27;
static const double y28;
static const double y29;
static const double y30;
static const double y31;
static const double y32;
static const double y33;
static const double y34;
static const double y35;
static const double y36;
static const double y37;
static const double y38;
static const double y39;
static const double y40;
static const double y41;
static const double y42;
static const double y43;
static const double y44;
static const double y45;
static const double y46;
static const double y47;
static const double y48;
static const double y49;
static const double y50;
static const double y51;
static const double y52;
static const double y53;
static const double y54;
static const double y55;
static const double y56;
static const double y57;
static const double y58;
static const double y59;
static const double y60;
static const double y61;
static const double y62;
static const double y63;
static const double y64;
static const double y65;
static const double y66;
static const double y67;
static const double y68;
static const double y69;
static const double y70;
static const double y71;
static const double y72;
static const double y73;
static const double y74;
static const double y75;
static const double y76;
static const double y77;
static const double y78;
static const double y79;
static const double y80;
static const double y81;
static const double y82;
static const double y83;
static const double y84;
static const double y85;
static const double y86;
static const double y87;
static const double y88;
static const double y89;
static const double y90;
static const double y91;
static const double y92;
static const double y93;
static const double y94;
static const double y95;
static const double y96;
static const double y97;
static const double y98;
static const double y99;
static const double y100;
static const int N;


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

