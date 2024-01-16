"Is the program below correct to classify a number as even or odd and below 100?"

#include <stdio.h>

int main () {
    int a;
    printf("%d", &a);
    if ((a % 2== 0) && (a < 100)) {
        printf("The number is even and below 100.\n");
    } else if (a > 100) {
        printf("The number is even and equal or above 100.\n");
    }
    
    if ((a % 2 != 0) && (a < 100)) {
        printf("The number is odd and below 100");
    } else if (a > 100) {
        printf("The number is odd and equal or above 100.\n")
    }
}

"The second condition on both the ifs doesnt validate if the number is even or odd, this way the program is not correct."
