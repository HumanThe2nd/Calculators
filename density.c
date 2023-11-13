// density calculator
// Givens: diameter of planet ,radius of satellites, their periods
// Constants: pi, universal gravitional constant
#include <stdio.h>
long double t=1000,pi=3.141592653589793238;
int main() {
    long double d=2500*t,r1=45*t,T1=8*60*60,T2=8/7*24*60*60;
    long double p = 4*pi*pi*(d/2+r1)/(4.0/3*pi*d/2)*(d/2+r1);
    p/= (d/2)/(d/2+r1)*(d/2)*6.67/(t*t*t*100);
    p/=T1*T1;
    printf("%llf\n",p);
}
