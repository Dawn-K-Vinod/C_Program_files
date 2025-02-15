/*
Author      : Dawn K Vinod
Date        : 15/02/2025
Description : Program to display multiplication tables starting from 1 to any number.
*/
#include <stdio.h>

int main() {
    int lower_limit, upper_limit;
    printf("Enter two numbers, to display multiplication tables within that range(inclusive): ");
    scanf("%d %d",&lower_limit, &upper_limit);
    
    if (upper_limit < lower_limit) {
        upper_limit = upper_limit + lower_limit;
        lower_limit = upper_limit - lower_limit;
        upper_limit = upper_limit-lower_limit;
    }
    
    int limit;
    printf("Enter the limit of all tables: ");
    scanf("%d",&limit);
    
    for (int i=lower_limit; i<=upper_limit; i++) {
        printf("Multiplication table of %d:\n",i);
        for (int k=1; k<=limit; k++) {
            printf("%d x %d = %d\n", i, k, i*k);
        }
        printf("\n");
    }
    return 0;
}