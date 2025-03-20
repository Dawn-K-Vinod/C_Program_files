/*
Author      : Dawn K Vinod
Date        : 19/03/2025
Description : Program to replace a word in a string with another word.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]",str);// input a sentence with spaces
    
    char word[sizeof(str)/2];
    printf("Enter the word to be replaced:");
    scanf("%s",word); // input a word to be replaced

    char new_word[sizeof(str)/2];
    printf("Enter the new word:");
    scanf("%s",new_word); // input a new word to replace the old word
    
    char temp[sizeof(str)]; // temporary string to store the updated string
    
    int x, flag, k=0;// x is used to iterate through the word, flag is used to check if the word is found, k is used to iterate through the temporary string
    for (int i=0; str[i] != '\0'; i++) {
        x=0; flag=1;
        // check if the word is found
        while (word[x]) {
            if (str[i+x]==word[x]) { x++; continue; }
            else { flag=0; break; }
        }
        // if the word is found, instead of copying the old word, copy the new word to the temporary string.
        if (flag) {
            x=0;
            while (new_word[x]) {
                temp[k]=new_word[x];
                x++; k++;
            }
        }
        // if the word is not found, copy the character to the temporary string
        else {
            temp[k]=str[i];
            k++;
            continue;
        }
        i = i + strlen(word)-1;// skip the old word if the word is found and replaced.
    }
    strcpy(str,temp);// copy the temporary string to the original string
    printf("\nThe updated string:\n\"%s\"",str);
    return 0;
}