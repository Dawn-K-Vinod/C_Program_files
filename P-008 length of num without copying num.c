/*
Author      : Dawn K Vinod
Date        : 16/02/2025
Description : Program to find the length of a number without using a copy of the number.
*/

#include <stdio.h>

int length_of_number(int number) {
    int len_num=1, multiplier=10;
    while ((number/multiplier) != 0) {
        len_num++;
        multiplier *= 10;
    }
    return len_num;
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    printf("Length is: %d", length_of_number(num));

    return 0;
}