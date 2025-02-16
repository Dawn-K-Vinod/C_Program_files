/*
Author      : Dawn K Vinod
Date        : 16/02/2025
Description : Program to check whether the given number is armstrong or not.
*/
#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    if (num<=0) { return 0;}
    int rem, copy=num, sum=0, len=(int)log10(num)+1;
    while (copy!=0) {
        rem = copy % 10;
        sum += pow(rem,len);
        copy /= 10;
    }
    if (sum==num) {
        return 1;
    }
    return 0;
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    if (is_armstrong(num)) {
        printf("%d is an armstrong number.",num);
    } else {
        printf("%d is not an armstrong number.",num);
    }
    return 0;
}
