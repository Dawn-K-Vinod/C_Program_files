/*
Author      : Dawn K Vinod
Date        : 16/02/2025
Description : Program to print Armstrong numbers below any number n.
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
    int n;
    printf("Enter the limit `n`: ");
    scanf("%d",&n);
    
    printf("Armstrong numbers below %d:\n",n);
    for (int i=1; i<=n; i++) {
        if (is_armstrong(i)) {
            printf("%d\n",i);
        }
    }

    return 0;
}