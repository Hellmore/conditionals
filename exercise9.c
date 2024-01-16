// Write a program that reads a year (interger value) and prints if its a leap year or not. Every year multiple of 400 is a leap year. Every year multiple of 4 but not multiple of 400 is also a leap year.//

#include <stdio.h>

int main () {
    int year;
    
   printf("Write the year to know if its a leap year: \n");
   scanf("%d", &year);
   
   if (year % 400 == 0) {
       printf("%d its a leap year!", year);
   } else if ((year % 400 != 0) && (year % 4 == 0)) {
       printf("%d its a leap year!", year);
   } else {
       printf("%d isn´t a leap year!", year);
   }
   return 0;
}
