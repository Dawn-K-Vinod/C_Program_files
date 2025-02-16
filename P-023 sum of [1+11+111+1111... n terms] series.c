/*
Author      : Dawn K Vinod
Date        : 16/02/2025
Description : Program to find the sum of [ 1 + 11 + 111 + 1111 ... n terms] series.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number `n` to display the sum of [ 1 + 11 + 111 + 1111 ... n terms] series: ");
    scanf("%d",&n);
    
    long long int sum=0, temp=1;
    for (int i=1; i<=n; i++) {
        sum = sum + temp;
        temp = (temp*10)+1;
    }
    printf("Sum of the given series: %lld",sum);
    return 0;
}