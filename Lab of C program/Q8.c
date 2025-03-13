/*
Author      : Dawn K Vinod
Date        : 10/03/2025
Description : Sorting a 2D array of character (eg: sorting a list of employee names [ascending]).
*/

#include <stdio.h>
#include <string.h>

int main() {
    int rows;
    printf("Enter the number of employees: ");
    scanf("%d",&rows);
    
    char names[rows][15];
    getchar();
    for (int i=0; i<rows; i++) {
        printf("Employee-%d: ",i+1);
        scanf("%[^\n]",names[i]);
        getchar();
    }
    
    char temp[15];
    for (int i=0; i<rows-1; i++) {
        for (int k=0; k<rows-1-i; k++) {
            if (strcmp(names[k],names[k+1])>0) {
                strcpy(temp,names[k]);
                strcpy(names[k],names[k+1]);
                strcpy(names[k+1],temp);
            }
        }
    }
    
    printf("\nThe Sorted employee list (2D array of characters):\n");
    for (int j=0; j<rows; j++) {
        printf("%s\n",names[j]);
    }
    return 0;
}
