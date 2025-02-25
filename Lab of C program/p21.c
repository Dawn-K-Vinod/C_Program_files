#include <stdio.h>
#include <string.h>
int main() {
	char str1[30];
	printf("Enter the first string: ");
	scanf("%[^\n]",str1);
	
	getchar();
	
	char str2[30];
	printf("\nEnter the second string: ");
	scanf("%[^\n]",str2);
	
	int result=strcmp(str1,str2);
	if (result==0) {
		printf("\nThe given two strings are equal.\n");
	} else {
		printf("\nThe given two strings are not equal.\n");
	}
	return 0;
}	
