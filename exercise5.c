#include <stdio.h>
#include <math.h>

int a, b, c;
double s, area;

int main () {
    printf("Write the values for a, b and c: \n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a == b) && (a == c)) {
        printf("Equilateral triangle!");
    } else if ((a == b) && (a != c)) {
        printf("Isosceles triangle!");
    } else if ((a != b) && (a != c) && (b != c)) {
        printf("Escalene triangle!");
    }

    s = (a + b + c) / 2;

    area = sqrt(s * (s - (double) a) * (s - (double) b) * (s - (double) c));

    printf("The area of the triangle is: %lf.\n", area);

    return 0;
}