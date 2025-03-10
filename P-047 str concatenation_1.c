
#include <stdio.h>
#include <string.h>

int read_str(char str[], int size) {
    fgets(str, size, stdin);
    int i=strlen(str)-1;
    if (str[i] == '\n') {
        str[i] = '\0';
    }
    return 0;
}

int main() {
    char str1[20];
    printf("Enter string-1: ");
    read_str(str1,sizeof(str1));
    
    char str2[20];
    printf("Enter string-2 :");
    read_str(str2,sizeof(str2));
    
    int i=strlen(str1);
    str1[i]=' '; i++;
    
    int j;
    for (j=0; str2[j]!='\0'; j++) {
        str1[i+j] = str2[j];
    }
    str1[i+j]='\0';
    printf("Concatenated string: %s",str1); 
    return 0;
}
