#include <stdio.h>
// givens: m1,v1,m2,v2,t
// solving for force exerted on each mass during collision elastic
// J = Δp = mΔv = fΔt
// f = mΔv/t
int main() {
    double m1=7,v1=4.1,m2=3.1,v2=-2.1,t=0.060; // filler values for given
    double pt = m1*v1+m2*v2, // total momentum
    et= m1*v1*v1+m2*v2*v2; // total energy
    et*=m1; // removing m1 as denominator
    et-=pt*pt; // simplify constant
    double v22=m2*m2+m1*m2, // v2 squared final
    v2f = pt*m2*2; // v2 final
    v2f = (v2f-v2*v22); // synthetic division 
    v2f = v2f/v22; // solve for the value of v2f 
    double f = m2*(v2f-v2)/t; // solve for force using mΔv/t
    printf("%lf",f);// print out force
}
