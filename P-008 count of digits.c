/*
Author      : Dawn K Vinod
Date        : 06/02/2025
Description : Program to count number of digits in a number.
*/
#include <stdio.h>

int main() {
    int num, num_of_digits=0;
    printf("Enter the number:");
    scanf("%d",&num);
    
    int i=num;
    while (i!=0) {
        num_of_digits++;
        i/=10;
    }
    printf("The number `%d` has %d digits.",num,num_of_digits);
    return 0;
}
