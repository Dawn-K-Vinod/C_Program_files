#include <stdio.h>
#include <string.h>
int main() {
	char str[30];
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	
	int len=strlen(str);
	int j=len-1;
	
	char temp;
	for (int i=0; i<len/2; i++,j--) {
		temp=str[i]; str[i]=str[j]; str[j]=temp;
	}
	
	printf("\nReversed string: %s\n",str);
}
