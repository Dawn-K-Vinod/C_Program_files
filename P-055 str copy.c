/*
Author      : Dawn K Vinod
Date        : 03/03/2025
Description : Program to copy one string to another without using strcpy().
*/
#include <stdio.h>

int main() {
    char str[30];
    printf("Enter the string: ");
    scanf("%29[^\n]",str);
    
    char str_copy[sizeof(str)];
    
    int i;
    for (i=0; str[i]!='\0'; i++) {
        str_copy[i]=str[i];
    }
    str_copy[i]='\0';
    
    printf("\nCopy of the string: %s\n",str_copy);
    return 0;
}
