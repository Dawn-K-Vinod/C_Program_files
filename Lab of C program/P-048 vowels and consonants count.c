#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char str[30];
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	
	int len=strlen(str);
	char vowels[]="aeiouAEIOU";
	
	int v_count=0, c_count=0, flag;
	for (int i=0; i<len; i++) {
		if (!(isalpha(str[i]))) {
			continue;
		}
		flag=0;
		for (int j=0; j<sizeof(vowels); j++) {
			if (str[i]==vowels[j]) {
				flag=1;
				v_count++;
				break;
			}
		}
		if (flag==0) {
			c_count++;
		}
	}
	printf("Number of vowels in the given string: %d\n",v_count);
	printf("Number of consonants in the given string: %d\n",c_count);
	return 0;
}
