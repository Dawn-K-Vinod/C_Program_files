/*
Author      : Dawn K Vinod
Date        : 15/02/2025
Description : Program to display multiplication tables starting from 1 to any number.
*/

#include <stdio.h>
int main() {
    int tables_num;
    printf("Enter a number to display multiplication tables upto that number: ");
    scanf("%d",&tables_num);
    
    int limit;
    printf("Enter the limit of all tables: ");
    scanf("%d",&limit);
    
    for (int i=1; i<=tables_num; i++) {
        printf("Multiplication table of %d:\n",i);
        for (int k=1; k<=limit; k++) {
            printf("%d x %d = %d\n", i, k, i*k);
        }
        printf("\n");
    }
    return 0;
}