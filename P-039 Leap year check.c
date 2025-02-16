/*
Author      : Dawn K Vinod
Date        : 17/02/2025
Description : Program to check whether the given year is leap year or not.
*/
#include <stdio.h>

int is_leap_year(int y) {
    // variable y means year.
    if (y%400==0) {return 1;}
    else if (y%100==0) {return 0;}
    else if (y%4==0) {return 1;}
    else {return 0;}
}

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    
    if (is_leap_year(year)) {
        printf("\n%d is a leap year.\n",year);
    } else {
        printf("\n%d is not a leap year.\n",year);
    }
    return 0;
}