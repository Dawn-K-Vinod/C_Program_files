/*
Author     : Dawn K Vinod
Date       : 04/02/2025
Description: Program to print Prime numbers upto a number.
*/
#include <stdio.h>

int main() {
    int n;
    printf("enter :");
    scanf("%d",&n);
    
    for (int num=1;num<=n;num+=2) {
        int i=2;
        for (;i<=num;i++) {
            if (num%i==0) {
                break;
            }
        }
        if (i==num) {
            printf("%d ",num);
        }
    }
    return 0;
}
