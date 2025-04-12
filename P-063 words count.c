/*
Author: Dawn K Vinod
Description: C program to count the number of words in a given string. 
(Assume that words are separated by one or more spaces)(without using any functions).
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char words[100];
    printf("Enter a sentence: ");
    scanf("%99[^\n]",words);
    
    int word_count=0;

    for (int i=0; words[i]!='\0'; i++) {
        if ((!isspace(words[i])) && ((isspace(words[i+1])) || words[i+1]=='\0')) {
            word_count++;
        }
    }
    printf("Word Count: %d\n",word_count);
    return 0;
}
