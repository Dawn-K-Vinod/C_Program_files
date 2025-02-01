/*
Author      : Dawn K Vinod
Date        : 01/02/2025
Description : Program to find the length of any number without changing the value of the original variabl
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int num_copy = num;
    int length=0;
    while (num_copy!=0) {
        num_copy = num_copy/10;
        length++;
    }
    printf("Length:%d\n",length);
    return 0;
}
