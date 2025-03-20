/*
Author      : Dawn K Vinod
Date        : 19/03/2025
Description : Program to check if two strings are anagrams of each other.
*/

#include <stdio.h>
#include <string.h>
// Function to remove spaces from a string
void rm_spaces(char str[]) {
    char temp[strlen(str)];
    int k=0;
    for(int i=0; str[i]!='\0'; i++) {
        if (str[i]!=' ') {
            temp[k]=str[i];
            k++;
        }
    }
    strcpy(str,temp);
}
// Function to count the number of occurences of a character in a string
int count_ch(char str[], char ch) {
    int count=0;
    for (int i=0; str[i]!='\0'; i++) {
        if (str[i]==ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str1[50];
    printf("Enter first string: ");
    scanf("%[^\n]",str1);
    getchar();
    char str2[50];
    printf("Enter second string: ");
    scanf("%[^\n]",str2);
    // Removing spaces from the strings
    char temp1[sizeof(str1)];
    char temp2[sizeof(str2)];
    // Copying the strings to temporary strings
    strcpy(temp1,str1);
    strcpy(temp2,str2);
    // Removing spaces from the strings
    rm_spaces(temp1);
    rm_spaces(temp2);
    // if the length of the strings are not equal, they can't be anagrams.
    if (strlen(temp1) != strlen(temp2)) { 
        printf("The given two strings are not anagrams.\n");
        return 0;
    }
    // Checking if the strings are anagrams by comparing the count of each character in both strings.
    int flag=1;
    for (int k=0; temp1[k]!='\0'; k++) {
        if (count_ch(temp1,temp1[k]) != count_ch(temp2,temp1[k])) {
            flag=0;
            break;
        }
    }

    if (flag) {
        printf("The given two strings are anagrams of each other.\n");
    } 
    else {
        printf("The given two strings are not anagrams.\n");
    }
    return 0;
}