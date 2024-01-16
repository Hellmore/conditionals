// A person can retire by the govern in the following cases://
// - Its a male. Its at least 65 years old. Has at least 10 years of contribuition.
// - Its a male. Its a leats 63 years old. Has at leats 15 years of contribuition.
// - Its a female. Its at least 63 years old. Has at least 10 years of contribuition.
// - Its a female. Its a least 61 years old. Has at least 15 years of contribuition.//
// Write a program that reads 'M' or 'F' to represent the gender, its age and time of contribuition. The program must print "Retireble" in case the person fits in one of the cases. In case they dont fit the program must print "Not Retireble".//

#include <stdio.h>

int main () {

    char gender;
    int age, contribuition;
    
    printf("Write M for male and F for female, the age and time of contribuition of the person: \n");
    scanf("%c%d%d", &gender, &age, &contribuition);
    
    if (gender == 'M') {
        if (age >= 65 && contribuition >= 10) {
            printf("Retireble.");
        } else if (age >= 63 && contribuition >= 15) {
            printf("Retireble.");
        } else {
            printf("Not Retireble.");
        }
    }
    
    if (gender == 'F') {
        if (age >= 63 && contribuition >= 10) {
            printf("Retireble.");
        } else if (age >= 61 && contribuition >= 15) {
            printf("Retireble.");
        } else {
            printf("Not Retireble.");
        }
    }
return 0;
}
