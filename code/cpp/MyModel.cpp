#include "MyModel.h"
#include "DNest4/code/DNest4.h"
#include <boost/math/distributions/normal.hpp>
#include <boost/math/distributions/gamma.hpp>
#include <boost/math/special_functions/gamma.hpp>
#include <iomanip>

boost::math::normal __boost_dist(0.0, 1.0);

using namespace std;
using namespace DNest4;

const double MyModel::t0 = 0.0;
const double MyModel::t1 = 0.01;
const double MyModel::t2 = 0.02;
const double MyModel::t3 = 0.03;
const double MyModel::t4 = 0.04;
const double MyModel::t5 = 0.05;
const double MyModel::t6 = 0.06;
const double MyModel::t7 = 0.07;
const double MyModel::t8 = 0.08;
const double MyModel::t9 = 0.09;
const double MyModel::t10 = 0.1;
const double MyModel::t11 = 0.11;
const double MyModel::t12 = 0.12;
const double MyModel::t13 = 0.13;
const double MyModel::t14 = 0.14;
const double MyModel::t15 = 0.15;
const double MyModel::t16 = 0.16;
const double MyModel::t17 = 0.17;
const double MyModel::t18 = 0.18;
const double MyModel::t19 = 0.19;
const double MyModel::t20 = 0.2;
const double MyModel::t21 = 0.21;
const double MyModel::t22 = 0.22;
const double MyModel::t23 = 0.23;
const double MyModel::t24 = 0.24;
const double MyModel::t25 = 0.25;
const double MyModel::t26 = 0.26;
const double MyModel::t27 = 0.27;
const double MyModel::t28 = 0.28;
const double MyModel::t29 = 0.29;
const double MyModel::t30 = 0.3;
const double MyModel::t31 = 0.31;
const double MyModel::t32 = 0.32;
const double MyModel::t33 = 0.33;
const double MyModel::t34 = 0.34;
const double MyModel::t35 = 0.35;
const double MyModel::t36 = 0.36;
const double MyModel::t37 = 0.37;
const double MyModel::t38 = 0.38;
const double MyModel::t39 = 0.39;
const double MyModel::t40 = 0.4;
const double MyModel::t41 = 0.41;
const double MyModel::t42 = 0.42;
const double MyModel::t43 = 0.43;
const double MyModel::t44 = 0.44;
const double MyModel::t45 = 0.45;
const double MyModel::t46 = 0.46;
const double MyModel::t47 = 0.47;
const double MyModel::t48 = 0.48;
const double MyModel::t49 = 0.49;
const double MyModel::t50 = 0.5;
const double MyModel::t51 = 0.51;
const double MyModel::t52 = 0.52;
const double MyModel::t53 = 0.53;
const double MyModel::t54 = 0.54;
const double MyModel::t55 = 0.55;
const double MyModel::t56 = 0.56;
const double MyModel::t57 = 0.57;
const double MyModel::t58 = 0.58;
const double MyModel::t59 = 0.59;
const double MyModel::t60 = 0.6;
const double MyModel::t61 = 0.61;
const double MyModel::t62 = 0.62;
const double MyModel::t63 = 0.63;
const double MyModel::t64 = 0.64;
const double MyModel::t65 = 0.65;
const double MyModel::t66 = 0.66;
const double MyModel::t67 = 0.67;
const double MyModel::t68 = 0.68;
const double MyModel::t69 = 0.69;
const double MyModel::t70 = 0.7;
const double MyModel::t71 = 0.71;
const double MyModel::t72 = 0.72;
const double MyModel::t73 = 0.73;
const double MyModel::t74 = 0.74;
const double MyModel::t75 = 0.75;
const double MyModel::t76 = 0.76;
const double MyModel::t77 = 0.77;
const double MyModel::t78 = 0.78;
const double MyModel::t79 = 0.79;
const double MyModel::t80 = 0.8;
const double MyModel::t81 = 0.81;
const double MyModel::t82 = 0.82;
const double MyModel::t83 = 0.83;
const double MyModel::t84 = 0.84;
const double MyModel::t85 = 0.85;
const double MyModel::t86 = 0.86;
const double MyModel::t87 = 0.87;
const double MyModel::t88 = 0.88;
const double MyModel::t89 = 0.89;
const double MyModel::t90 = 0.9;
const double MyModel::t91 = 0.91;
const double MyModel::t92 = 0.92;
const double MyModel::t93 = 0.93;
const double MyModel::t94 = 0.94;
const double MyModel::t95 = 0.95;
const double MyModel::t96 = 0.96;
const double MyModel::t97 = 0.97;
const double MyModel::t98 = 0.98;
const double MyModel::t99 = 0.99;
const double MyModel::t100 = 1.0;
const double MyModel::y0 = -2.53073093647;
const double MyModel::y1 = -3.25832020835;
const double MyModel::y2 = -4.98407018125;
const double MyModel::y3 = -4.99792496142;
const double MyModel::y4 = -3.82201997044;
const double MyModel::y5 = -5.92624610099;
const double MyModel::y6 = -7.55798158464;
const double MyModel::y7 = -7.47583019595;
const double MyModel::y8 = -8.69569622668;
const double MyModel::y9 = -8.5185550011;
const double MyModel::y10 = -6.90559193371;
const double MyModel::y11 = -7.63023256165;
const double MyModel::y12 = -8.67937044756;
const double MyModel::y13 = -7.76790684339;
const double MyModel::y14 = -9.81341181264;
const double MyModel::y15 = -7.35620742528;
const double MyModel::y16 = -8.05611235963;
const double MyModel::y17 = -5.50242605684;
const double MyModel::y18 = -6.45201700229;
const double MyModel::y19 = -7.27295250899;
const double MyModel::y20 = -7.67512938594;
const double MyModel::y21 = -5.31550695848;
const double MyModel::y22 = -4.20245141568;
const double MyModel::y23 = -4.90902950936;
const double MyModel::y24 = -3.64773767573;
const double MyModel::y25 = -0.51711246644;
const double MyModel::y26 = -0.629715653515;
const double MyModel::y27 = 0.532354434903;
const double MyModel::y28 = -2.53805635802;
const double MyModel::y29 = -0.0775779630924;
const double MyModel::y30 = 0.378002701418;
const double MyModel::y31 = 0.491093294233;
const double MyModel::y32 = 2.23312061205;
const double MyModel::y33 = 4.51687113519;
const double MyModel::y34 = 3.2742567904;
const double MyModel::y35 = 6.43430870069;
const double MyModel::y36 = 5.71645630075;
const double MyModel::y37 = 5.24825351893;
const double MyModel::y38 = 5.69668119895;
const double MyModel::y39 = 6.45336811483;
const double MyModel::y40 = 5.35417749769;
const double MyModel::y41 = 7.07718137326;
const double MyModel::y42 = 8.14724245349;
const double MyModel::y43 = 6.72120524564;
const double MyModel::y44 = 8.48243063808;
const double MyModel::y45 = 6.3135887986;
const double MyModel::y46 = 7.46575197878;
const double MyModel::y47 = 6.81818396172;
const double MyModel::y48 = 7.43381145483;
const double MyModel::y49 = 8.06156847679;
const double MyModel::y50 = 7.50406805024;
const double MyModel::y51 = 5.11034312779;
const double MyModel::y52 = 6.95809708555;
const double MyModel::y53 = 6.4804960797;
const double MyModel::y54 = 4.79822471862;
const double MyModel::y55 = 4.38885189823;
const double MyModel::y56 = 4.50400265876;
const double MyModel::y57 = 3.05603773042;
const double MyModel::y58 = 0.618376163171;
const double MyModel::y59 = 0.312220789987;
const double MyModel::y60 = 1.05781835949;
const double MyModel::y61 = 2.04710369861;
const double MyModel::y62 = -1.47714526787;
const double MyModel::y63 = -2.33591663138;
const double MyModel::y64 = -2.55915525812;
const double MyModel::y65 = -3.44102475805;
const double MyModel::y66 = -3.81379822882;
const double MyModel::y67 = -4.15768035129;
const double MyModel::y68 = -5.9026237467;
const double MyModel::y69 = -6.70007594463;
const double MyModel::y70 = -6.31784038057;
const double MyModel::y71 = -6.72497022142;
const double MyModel::y72 = -6.15931560472;
const double MyModel::y73 = -8.6365675994;
const double MyModel::y74 = -9.85936589414;
const double MyModel::y75 = -8.66796102566;
const double MyModel::y76 = -8.55857384019;
const double MyModel::y77 = -8.10358012451;
const double MyModel::y78 = -8.14777563265;
const double MyModel::y79 = -7.562655014;
const double MyModel::y80 = -6.41941185505;
const double MyModel::y81 = -7.27865878491;
const double MyModel::y82 = -6.9679685039;
const double MyModel::y83 = -5.18719226401;
const double MyModel::y84 = -5.51836646951;
const double MyModel::y85 = -8.34298589502;
const double MyModel::y86 = -6.04397856378;
const double MyModel::y87 = -5.54401732686;
const double MyModel::y88 = -3.61813133241;
const double MyModel::y89 = -3.84041363964;
const double MyModel::y90 = -1.71046935466;
const double MyModel::y91 = -3.6009155794;
const double MyModel::y92 = 1.02878492342;
const double MyModel::y93 = -0.868175375735;
const double MyModel::y94 = 1.9618990881;
const double MyModel::y95 = 0.264078597466;
const double MyModel::y96 = 1.31045835985;
const double MyModel::y97 = 3.26796880859;
const double MyModel::y98 = 3.68314947945;
const double MyModel::y99 = 6.73479644435;
const double MyModel::y100 = 5.79955998372;
const int MyModel::N = 101;


MyModel::MyModel()
{

}

void MyModel::from_prior(RNG& rng)
{
_A = rng.rand();
_P = rng.rand();
_phi = rng.rand();

A = 0.0 + 5.0*quantile(__boost_dist, _A);
P = 0.0 + (1.0 - (0.0))*_P;
phi = 0.0 + (6.283185307179586 - (0.0))*_phi;

}

double MyModel::perturb(RNG& rng)
{
double logH = 0.0;

int which;
which = rng.rand_int(3);
if(which == 0)
{
_A += rng.randh();
DNest4::wrap(_A, 0.0, 1.0);
}
if(which == 1)
{
_P += rng.randh();
DNest4::wrap(_P, 0.0, 1.0);
}
if(which == 2)
{
_phi += rng.randh();
DNest4::wrap(_phi, 0.0, 1.0);
}


A = 0.0 + 5.0*quantile(__boost_dist, _A);
P = 0.0 + (1.0 - (0.0))*_P;
phi = 0.0 + (6.283185307179586 - (0.0))*_phi;

return logH;


}

double MyModel::log_likelihood() const
{
double logp = 0.0;

logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y0) - (A*sin(2*M_PI*t0/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y1) - (A*sin(2*M_PI*t1/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y2) - (A*sin(2*M_PI*t2/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y3) - (A*sin(2*M_PI*t3/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y4) - (A*sin(2*M_PI*t4/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y5) - (A*sin(2*M_PI*t5/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y6) - (A*sin(2*M_PI*t6/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y7) - (A*sin(2*M_PI*t7/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y8) - (A*sin(2*M_PI*t8/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y9) - (A*sin(2*M_PI*t9/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y10) - (A*sin(2*M_PI*t10/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y11) - (A*sin(2*M_PI*t11/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y12) - (A*sin(2*M_PI*t12/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y13) - (A*sin(2*M_PI*t13/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y14) - (A*sin(2*M_PI*t14/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y15) - (A*sin(2*M_PI*t15/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y16) - (A*sin(2*M_PI*t16/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y17) - (A*sin(2*M_PI*t17/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y18) - (A*sin(2*M_PI*t18/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y19) - (A*sin(2*M_PI*t19/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y20) - (A*sin(2*M_PI*t20/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y21) - (A*sin(2*M_PI*t21/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y22) - (A*sin(2*M_PI*t22/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y23) - (A*sin(2*M_PI*t23/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y24) - (A*sin(2*M_PI*t24/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y25) - (A*sin(2*M_PI*t25/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y26) - (A*sin(2*M_PI*t26/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y27) - (A*sin(2*M_PI*t27/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y28) - (A*sin(2*M_PI*t28/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y29) - (A*sin(2*M_PI*t29/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y30) - (A*sin(2*M_PI*t30/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y31) - (A*sin(2*M_PI*t31/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y32) - (A*sin(2*M_PI*t32/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y33) - (A*sin(2*M_PI*t33/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y34) - (A*sin(2*M_PI*t34/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y35) - (A*sin(2*M_PI*t35/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y36) - (A*sin(2*M_PI*t36/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y37) - (A*sin(2*M_PI*t37/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y38) - (A*sin(2*M_PI*t38/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y39) - (A*sin(2*M_PI*t39/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y40) - (A*sin(2*M_PI*t40/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y41) - (A*sin(2*M_PI*t41/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y42) - (A*sin(2*M_PI*t42/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y43) - (A*sin(2*M_PI*t43/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y44) - (A*sin(2*M_PI*t44/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y45) - (A*sin(2*M_PI*t45/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y46) - (A*sin(2*M_PI*t46/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y47) - (A*sin(2*M_PI*t47/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y48) - (A*sin(2*M_PI*t48/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y49) - (A*sin(2*M_PI*t49/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y50) - (A*sin(2*M_PI*t50/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y51) - (A*sin(2*M_PI*t51/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y52) - (A*sin(2*M_PI*t52/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y53) - (A*sin(2*M_PI*t53/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y54) - (A*sin(2*M_PI*t54/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y55) - (A*sin(2*M_PI*t55/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y56) - (A*sin(2*M_PI*t56/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y57) - (A*sin(2*M_PI*t57/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y58) - (A*sin(2*M_PI*t58/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y59) - (A*sin(2*M_PI*t59/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y60) - (A*sin(2*M_PI*t60/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y61) - (A*sin(2*M_PI*t61/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y62) - (A*sin(2*M_PI*t62/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y63) - (A*sin(2*M_PI*t63/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y64) - (A*sin(2*M_PI*t64/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y65) - (A*sin(2*M_PI*t65/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y66) - (A*sin(2*M_PI*t66/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y67) - (A*sin(2*M_PI*t67/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y68) - (A*sin(2*M_PI*t68/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y69) - (A*sin(2*M_PI*t69/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y70) - (A*sin(2*M_PI*t70/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y71) - (A*sin(2*M_PI*t71/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y72) - (A*sin(2*M_PI*t72/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y73) - (A*sin(2*M_PI*t73/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y74) - (A*sin(2*M_PI*t74/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y75) - (A*sin(2*M_PI*t75/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y76) - (A*sin(2*M_PI*t76/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y77) - (A*sin(2*M_PI*t77/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y78) - (A*sin(2*M_PI*t78/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y79) - (A*sin(2*M_PI*t79/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y80) - (A*sin(2*M_PI*t80/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y81) - (A*sin(2*M_PI*t81/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y82) - (A*sin(2*M_PI*t82/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y83) - (A*sin(2*M_PI*t83/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y84) - (A*sin(2*M_PI*t84/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y85) - (A*sin(2*M_PI*t85/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y86) - (A*sin(2*M_PI*t86/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y87) - (A*sin(2*M_PI*t87/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y88) - (A*sin(2*M_PI*t88/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y89) - (A*sin(2*M_PI*t89/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y90) - (A*sin(2*M_PI*t90/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y91) - (A*sin(2*M_PI*t91/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y92) - (A*sin(2*M_PI*t92/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y93) - (A*sin(2*M_PI*t93/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y94) - (A*sin(2*M_PI*t94/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y95) - (A*sin(2*M_PI*t95/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y96) - (A*sin(2*M_PI*t96/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y97) - (A*sin(2*M_PI*t97/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y98) - (A*sin(2*M_PI*t98/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y99) - (A*sin(2*M_PI*t99/P + phi)))/(1.0), 2);
logp += -0.5*log(2*M_PI) - log(1.0) - 0.5*pow(((y100) - (A*sin(2*M_PI*t100/P + phi)))/(1.0), 2);
if(std::isnan(logp) || std::isinf(logp))
    logp = -1E300;

return logp;

}

void MyModel::print(std::ostream& out) const
{
out<<setprecision(12);
out<<A<<' ';
out<<P<<' ';
out<<phi<<' ';

}

string MyModel::description() const
{
return string("A, P, phi");
}

