#include <stdio.h>

/* Author      : Dawn K Vinod
   Date        : 26/01/2025 
   Description : C program to check whether the given number is positive, negative or zero */

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    
    if (number>0) {
        printf("The given number is positive.");
    }

    else if (number<0) {
        printf("The given number is negative.");
    }

    else {
        printf("The given number is zero.");
    }
    return 0;
}