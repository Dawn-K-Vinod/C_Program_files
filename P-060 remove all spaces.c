#include <stdio.h>
#include <string.h>

int main() {
    char str[20];  // Declaring a character array to store the string
    printf("Enter a string: ");
    scanf("%19[^\n]",str);
    
    char temp[sizeof(str)];
    
    int i=0;
    for (int j=0; str[j]!='\0'; i++,j++) {
        if (str[j]!=' ') {
            temp[i]=str[j];
        }
        else {
            i--;
        }
    }
    temp[i]='\0';
    strcpy(str,temp);
    printf("The string after removing spaces:\n\"%s\"",str);
    
    return 0;
}
