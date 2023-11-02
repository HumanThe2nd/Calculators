#include <stdio.h>
#include <math.h>
const double pi = 3.141592653589793238;// π for radian conversion
// givens: m1,m2,v1,v2,v2f θ1,θ2,θ2f
// computes the final velocity of m1
// radians conversion is unnecessary in normal solution
int main() {
double m1=2.8,m2=6.2,v1=3.5,v2=4.4,v2f=1.8,t1=29,t2=58,t2f=34;
t1*= 2*pi; t2*=2*pi; t2f*=2*pi; // multiply by 2π to then
t1/=360; t2/=360; t2f/=360; // convert to radians by div 360
double pv = m1*v1*sin(t1)+m2*v2*sin(t2), // vertical momentum
ph = -m1*v1*cos(t1)+m2*v2*cos(t2); // minus due to opposite dir
pv-=m2*v2f*sin(t2f); // subtract vert momentum of m2 (same dir)
ph+=m2*v2f*cos(t2f); // add hor momentum of m2 (opposite dir)
double pt= sqrt(pv*pv+ph*ph); // pythagorean to add components
double v1f = pt/m1; // solve v using p = mv -> v = p/m
printf("%lf",v1f); // print answer
}
