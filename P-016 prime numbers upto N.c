/*
Author     : Dawn K Vinod
Date       : 04/02/2025
Description: Program to print Prime numbers upto a number.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    if (n>=2) {
        printf("2 ");
    } else {
        printf("Invalid!! Prime numbers starts from 2.");
        return 0;
    }
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
