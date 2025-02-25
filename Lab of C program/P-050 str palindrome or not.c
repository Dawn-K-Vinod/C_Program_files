#include <stdio.h>
#include <string.h>
int main() {
	char str[30];
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	
	int len=strlen(str);
	int j=len-1;
	
	int i;
	char temp;
	for (i=0; i<len/2; i++,j--) {
		if (str[i]!=str[j]) {
			printf("The given string '%s' is not a palindrome.\n",str);
			return 0;
		}
	}
	printf("The given string '%s' is a palindrome.\n",str);
	return 0;
}
