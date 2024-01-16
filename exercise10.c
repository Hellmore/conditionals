// Write a program that determinates the chronological bigger date of two previously dates given by the user. Each date must be given by three whole values where the first one represents days, the second the months and the third the years.//

#include <stdio.h>

int main () {
    int day1, day2, month1, month2, year1, year2;
    
    printf("Write, respectively, the day, month and year of ther first date: \n");
    scanf("%d%d%d", &day1, &month1, &year1);
    
    printf("Write, respectively, the day, month and year of ther second date: \n");
    scanf("%d%d%d", &day2, &month2, &year2);
    
    if (year1 > year2) {
        printf("The chronological order of the dates is: %d/%d/%d and %d/%d/%d", day2, month2, year2, day1, month1, year1);
    } else if (year2 > year1) {
        printf("The chronological order of the dates is: %d/%d/%d and %d/%d/%d", day1, month1, year1, day2, month2, year2);
    } else if (year1 == year2) {
        if (month1 > month2) {
            printf("The chronological order of the dates is: %d/%d/%d and %d/%d/%d", day2, month2, year2, day1, month1, year1);  
        } else if (month2 > month1) {
            printf("The chronological order of the dates is: %d/%d/%d and %d/%d/%d", day1, month1, year1, day2, month2, year2);   
        } else if (month1 == month2) {
            if (day1 > day2) {
                printf("The chronological order of the dates is: %d/%d/%d and %d/%d/%d", day2, month2, year2, day1, month1, year1);  
            } else if (day2 > day1) {
                printf("The chronological order of the dates is: %d/%d/%d and %d/%d/%d", day1, month1, year1, day2, month2, year2);  
            } else if (day1 == day2) {
                printf("The dates are the same: %d/%d/%d and %d/%d/%d", day1, month1, year1, day2, month2, year2);
            }
        }
    }
}
