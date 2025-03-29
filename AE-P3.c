/*
Author      : Dawn K Vinod
Date        : 19/03/2025
Description : Program to find the first non-repeating character in a string.
*/
#include <stdio.h>

int main() {
	// read the string from the user
	char str[30];
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	// loop to find the first non-repeating character
	int i, j, flag;
	for (i=0; str[i]!='\0'; i++) {
	    if (str[i]==' ') continue;
	    flag=1;
	    for (j=i+1; str[j]!='\0'; j++) {//loop to check if the character is repeating
	        if (str[i]==str[j]) {
	            flag=0;
	            break;
	        }
	    }
	    if (flag) {
	        printf("\nThe first non-repeating character: %c\n",str[i]);
	        break;
	    }
	}
	return 0;
}
