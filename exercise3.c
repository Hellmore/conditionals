// Make a program that reads a real number x and calculate the value of f(x) = √x + (x/2) + x^x.//

#include <stdio.h>
#include <math.h>

double numberx, fofx;

int main () {
    printf("Write a real number: \n");
    scanf("%lf", &numberx);

    fofx = (sqrt(numberx)) + (numberx / 2) + pow(numberx, numberx);
    printf("%lf", fofx);

    return 0;
}