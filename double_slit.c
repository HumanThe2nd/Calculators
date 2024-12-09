/*
Double Slit calculator
Author: Dan Shan
Date: 2024-12-08
Givens: d (cm), frequency(Hz), L(cm), n(#) and Xn(cm)
Unknown: ds, wavelngth, speed
*/
#include <stdio.h>
#include <math.h>
int main() {
    double d = 5,f = 20,L = 90,n = 3,xn = 14;
    double ds = sqrt(L*L+(xn+d/2)*(xn+d/2)) - sqrt(L*L+(xn-d/2)*(xn-d/2)); // ΔS
    double wavelength = ds/(n-0.5); // λ (wavelength)
    double speed = wavelength*f; // speed
    printf("%lf\n",speed);
}
