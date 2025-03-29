/*
Author      : Dawn K Vinod
Date        : 22/02/2025
Description : Reading and displaying string
*/
#include <stdio.h>

int main() {
    char str[10];  // Declaring a character array to store the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // to remove `\n` at the end of the string `str`
    for (int i=0; i<sizeof(str); i++) {
        if (str[i]=='\n') {
            str[i]='\0';
            break;
        }
    }
    
    printf("You entered: %s", str);
    return 0;
}
//===================================================================================================================
/*
the lines from 11-19 can be replaced with,

scanf("%s",str);
this only reads one word, that is, it stops reading when a space is encountered.
OR 
scanf("%[^\n],str);
this reads until a newline `\n` is encountered.

if you enter more than what is allocated for `str`, it will cause a BUFFER OVERFLOW, that is it write beyond the allocated memory.
========================================================================================================================
Again,
the lines from 11-19 can be replaced with,
scanf("%14[^\n],str);
here, one minus the allocated size of `str` is specified in this line.
this code reads until a newline `\n` is encountered and also
if you enter more than what is allocated for `str`, it will only read the specified number of characters and add a null terminator `\0` at the end.
the extra input you entered will be stored in the BUFFER.
=========================================================================================================================
=========================================================================================================================
HOW TO CLEAR THE BUFFER?
If you want to discard the remaining characters, you can do this:

while (getchar() != '\n');  // Flush buffer until newline

OR

scanf("%*[^\n]");  // Discards remaining characters
getchar();         // Consume the newline
=========================================================================================================================
*/
