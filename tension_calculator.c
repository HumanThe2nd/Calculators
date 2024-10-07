/*
Tension Calculator
Author: Dan Shan
Date: 2024-10-07
given mass of 2 blocks, their angles above horizon and the friction coefficient,
calculates the tension of the pulley
**code assumes block will slide towards m1**
*/
#include <stdio.h>
#include <math.h>

int main(){ 
    double m1=8,angle1=64,m2=6,angle2=30,f=0.11,pi=3.14159265358;
    angle1*=pi/180; angle2*=pi/180;
    double a1,a2,a,ft;
    a1=m1*9.8*sin(angle1)-f*m1*9.8*cos(angle1);
    a2=-m2*9.8*sin(angle2)-f*m2*9.8*cos(angle2);
    a=(a1+a2)/(m1+m2);
    ft=m2*a+m2*9.8*sin(angle2)+f*9.8*m2*cos(angle2);
    printf("%0.1lf\n",ft);
}
