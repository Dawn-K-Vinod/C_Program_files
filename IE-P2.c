/*
Author: Dawn K Vinod
Date: 11/03/2025
Description: C program to count the number of words in a given string. (Assume that words are separated by one or more spaces)(without using any functions).
*/
#include <stdio.h>
int main() {
    char words[30];
    printf("Enter a sentence: ");
    scanf("%29[^\n]",words);
    
    int word_count=0, cnt=0;
    
    int i;
    for (i=0; words[i]!='\0'; i++) {
        
        if (words[i]==' ') {
            cnt++;
            if (cnt>1) {
                continue;
            }
            word_count++;
        } else {
            cnt=0;
        }
    }
    if (words[i-1]!=' ') {
        word_count++;
    }
    printf("Number of words in the given string: %d",word_count);
    return 0;
}