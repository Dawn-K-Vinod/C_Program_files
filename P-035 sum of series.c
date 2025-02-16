/*
Author      : Dawn K Vinod
Date        : 16/02/2025
Description : Program to find the sum of (1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n) series.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number `n` to display the sum of (1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n) series: ");
    scanf("%d",&n);
    
    float sum=0;
    for (int i=1; i<=n; i++) {
        sum = sum + (1.0/i);
    }
    printf("Sum of the given series: %f",sum);
    return 0;
}