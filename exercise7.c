//Write a program that reads three numbers and print them in crescent order.//

#include <stdio.h>

int main () {
int a, b, c, small, medium, big;

printf("Write, respectively, the values for a, b and c: \n");
scanf("%d%d%d", &a, &b, &c);

if (a > b && a > c) {
    big = a;
    if (b > c) {
        medium = b;
        small = c;
    } else if (c > b) {
        medium = c;
        small = b;
    }
} else if (b > a && b > c) {
    big = b;
    if (a > c) {
        medium = a;
        small = c;
    } else if (c > a) {
        medium = c;
        small = a;
    }
} else if (c > a && c > b) {
    big = c;
    if (a > b) {
        medium = a;
        small = b;
    } else if (b > a) {
        medium = b;
        small = a;
    }
}

printf("The numbers in crescent order are: %d, %d, %d", small, medium, big);

return 0;
}
