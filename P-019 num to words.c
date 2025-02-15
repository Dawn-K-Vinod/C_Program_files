/*
Author      : Dawn K Vinod
Date        : 15/02/2025
Description : Program to print the digits of the given number in words.
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    int num_copy=num, rev=0, length=0;
    while (num_copy > 0) {
        rev = (rev*10) + (num_copy%10);
        num_copy /= 10;
        length++;
    }
    
    printf("The given number %d in words:\n",num);
    int digit;
    while (rev>0) {
        digit = rev%10;
        switch (digit) {
            case 0:
                printf("zero");
                break;
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
            default:
                printf("\nSomething wrong with the number entry.\n");
                return 0;
        }
        printf(" ");
        rev /= 10;
        
    }
    return 0;
}