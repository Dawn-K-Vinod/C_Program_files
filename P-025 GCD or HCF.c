/*
Author      : Dawn K Vinod
Date        : 09/02/2025
Description : GCD/HCF of two numbers. GCD function.
*/
#include <stdio.h>

int HCF (int num1, int num2) {
    int rem;
    while (num2!=0) {
        rem = num1%num2;
        num1=num2;
        num2=rem;
    }
    return num1;
}

int main() {
    int num1,num2;
    printf("Enter two positive numbers separated by space: ");
    scanf("%d %d",&num1,&num2);
    if (num1==0 && num2==0) {
        printf("Undefined; There is no unique HCF/GCD.\n");
        return 0;
    }
    printf("HCF of %d and %d is: %d\n",num1,num2,HCF (num1,num2));
    return 0;
}