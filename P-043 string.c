
#include <stdio.h>

int main() {
    char str[10];  // Declaring a character array to store the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces
    
    for (int i=0; i<sizeof(str); i++) {
        if (str[i]=='\n') {
            str[i]='\0';
            break;
        }
    }
    
    printf("You entered: %s", str);
    return 0;
}
