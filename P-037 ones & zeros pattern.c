/*
Author      : Dawn K Vinod
Date        : 16/02/2025
Description : Program to print ones & zeros pattern.
              1
              0 1
              1 0 1
              0 1 0 1
              1 0 1 0 1
*/

#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    
    printf("\nones & zeros pattern:\n");
    for (int i=1; i<=rows; i++) {
        // Here the inner loop is iterated from high to low to display desired pattern.
        for (int j=i; j>=1; j--) {
            if (j%2==0) { 
                printf("0 ");
            } else { 
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}