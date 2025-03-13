#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char str[30];
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	
	for (int i=0; str[i]!='\0'; i++) {
		if (!(isalpha(str[i]))) {
			continue;
		}
		if (isupper(str[i])) {
			str[i] += 32;
		} else {
			str[i] -= 32;
		}
	}
	printf("Swapped string: %s\n",str);
	return 0;
}
