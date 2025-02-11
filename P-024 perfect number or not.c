/*
Author      : Dawn K Vinod
Date        : 06/02/2025
Description : Program to check whether the given number is a perfect number or not.
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    
    int i=1, sum=0;
    while (i<num) {
        if (num%i==0) {
            sum+=i;
        }
        i++;
    }
    if (sum==num && num!=0) {
        printf("%d is a perfect number.",num);
    } else {
        printf("%d is not a perfect number.",num);
    }
    return 0;
}