//Make a program that reads two integer values for the variables x and y and exchange their contents without using other variables. //

#include <stdio.h>

int x, y;

int main () {
    printf("Write the values for x and y: \n");
    scanf("%d%d", &x, &y);
    printf("x = %d, y = %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("x = %d, y = %d\n", x, y);

    return 0;
}
