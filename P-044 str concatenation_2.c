/*
Author : Dawn k vinod
Date : 23/02/2025
Description : Concatenate two strings
Input : Read two strings from the user
Output : Display the concatenated string
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    printf("Enter string-1: ");
    fgets(str1, sizeof(str1), stdin); //reading string 1
    
    int i = strlen(str1);
    // Checking if there is space left for concatenating the second string
    if (i>18) {
        printf("No space left for concatenating second string!");
        return 0;
    }
    // Adding a space at the end of the first string
    if (str1[i-1] == '\n') {
        str1[i-1] = ' ';
    } else {
        str1[i]=' ';i++;
    }
    
    char str2[20];
    printf("Enter string-2 :");
    fgets(str2, sizeof(str2), stdin); //reading string 2
    
    int j;
    // Concatenating the second string to the first string.
    for (j=0; (i+j)<19 && str2[j]!='\0'; j++) {
        str1[i+j] = str2[j];
    }
    str1[i+j]='\0';
    printf("Concatenated string: %s",str1); 
    return 0;
}