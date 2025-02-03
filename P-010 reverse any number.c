/*
Author      : Dawn K Vinod
Date        : 01/02/2025
Description : Program to reverse any number
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int num_copy=num, rev=0, rem;
    while (num_copy!=0) {
        rem = num_copy % 10;
        rev = rev*10 + rem;
        num_copy/=10;
    }
    printf("%d\n%d",num,rev);
    
    return 0;
}