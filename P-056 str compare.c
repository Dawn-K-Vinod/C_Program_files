/*
Author : Dawn K Vinod
Date : 03/03/2025
Description : Program to compare two strings without using strcmp().
*/
#include <stdio.h>
#include <string.h>

int main() {
	char str1[30];
	printf("Enter the first string: ");
	scanf("%29[^\n]",str1);
	
	getchar();
	
	char str2[30];
	printf("\nEnter the second string: ");
	scanf("%29[^\n]",str2);
	
	
	int result=0,i;
    for (i=0; str1[i]!='\0' || str2[i]!='\0'; i++) {
        if (str1[i]!=str2[i]) {
            result = str1[i] - str2[i];
            break;
        }
    }
    
    if (str1[i]!=str2[i]) {
        result = str1[i] - str2[i];
    }
    
    if (result==0) {
        printf("\nThe given two strings are equal.\n");
    } else if (result>0) {
        printf("\nThe string \"%s\" is greater than the other.\n",str1);
    } else if (result<0) {
        printf("\nThe string \"%s\" is greater than the other.\n",str2);
    }
	return 0;
}	
