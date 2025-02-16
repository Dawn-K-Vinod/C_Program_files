/*
Author      : Dawn K Vinod
Date        : 16/02/2025
Description : Program to print number pattern.
              1
              1 2
              1 2 3
              1 2 3 4
*/
#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    
    printf("\nStar pattern:\n");
    for (int i=1; i<=rows; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}