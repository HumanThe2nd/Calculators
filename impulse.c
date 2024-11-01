/*
Impulse calculator
Date: 2024,Nov-01
calculates impulse on a mass m1 in an elastic collision
inputs: m1 and m2 in kg, v1 and v2 in m/s, t in ms
outputs: impulse force (sign indicates direction)
*/
#include <stdio.h>

int main() {
    double m1=5.5,v1=5.5,m2=3.5,v2=-2.4,t=62;
    t/=1000; // ms to s
    double pi=m1*v1+m2*v2,ei=m1*v1*v1+m2*v2*v2;
    double a=m1*m1+m1*m2,b=-pi*m1*2;
    b+=a*m1; // simulate synthetic division
    double vf=-b/a;
    double impulse=m1*(vf-v1)/t;
    printf("%lf\n",impulse); // negative indicates opposite direction
}
