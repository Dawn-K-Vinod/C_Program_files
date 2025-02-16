/*
Author      : Dawn K Vinod
Date        : 16/02/2025
Description : Program to print Floyd's triangle.
*/
#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    
    printf("Floyd's triangle:\n");
    int n=1;
    for (int i=1; i<=rows; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d\t",n++);
        }
        printf("\n");
    }
    
    return 0;
}