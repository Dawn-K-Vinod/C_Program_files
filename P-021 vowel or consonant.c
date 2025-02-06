/*
Author      : Dawn K Vinod
Date        : 06/02/2025
Description : Program to check whether the given number is a vowel or a consonant.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter any character:");
    scanf(" %c",&ch);
    
    char vowels[] = "aeiouAEIOU";
    if (isalpha(ch)) {
        if (strchr(vowels,ch)) {
            printf("The given character `%c` is a Vowel.",ch);
        } else {
            printf("The given character `%c` is a consonant.",ch);
        }
    } else {
        printf("The given character is not an Alphabet.");
    }
    
    return 0;
}