#include <stdio.h>
#include <string.h>

int is_palindrome (char str[]) {
    int len=strlen(str);
        int j=len-1;

        int i;
        char temp;
        for (i=0; i<len/2; i++,j--) {
                if (str[i]!=str[j]) {
                        return 0;
                }
        }
        return 1;

}

int main() {
        char str[30];
        printf("Enter the string: ");
        scanf("%[^\n]",str);

        if (is_palindrome(str)){
        printf("The given string '%s' is a palindrome.\n",str);
        }
        else {
            printf("The given string '%s' is a palindrome.\n",str);
        }
        return 0;
}
