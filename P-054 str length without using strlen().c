/*
Author      : Dawn K Vinod
Date        : 03/03/2025
Description : Program to find the length of a string without using strlen().
*/

#include <stdio.h>

int str_len(char str[]) {
    int i;
    for (i=0; str[i]!='\0'; i++);
    return i;
}

int main() {
    char string[30];
    printf("Enter the string: ");
    scanf("%29[^\n]",string);
    
    int len = str_len(string);
    
    printf("\nLength of the given string: %d\n",len);
    return 0;
}
