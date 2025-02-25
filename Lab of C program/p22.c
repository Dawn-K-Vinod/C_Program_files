#include <stdio.h>
#include <string.h>

int main() {
	char str[30];
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	
	int j, count, len=strlen(str);
	
	for (int i=0; i<len; i++) {
		if (str[i]=='\0' || str[i]==' ') {
			continue;
		}
		count=1;
		for (j=i+1; j<len; j++) {
			if (str[i]==str[j] || str[i]==str[j]+32 || str[i]==str[j]-32) {
				count++;
				str[j]='\0';
			}
		}
		printf("Frequency of '%c': %d\n",str[i],count);
	}
	return 0;
}
