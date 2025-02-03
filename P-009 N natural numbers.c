/*
Author      : Dawn K Vinod
Date        : 01/02/2025
Description : Program to print first N natural nummbers.
*/
#include <stdio.h>

int main() {
    int N;
    printf("Enter a numbers: ");
    scanf("%d",&N);
    printf("Natural numbers upto %d: ",N);
    
    int i=1;
    while (i<=N) {
        printf("%d ",i);
        i++;
    }
    return 0;
}
