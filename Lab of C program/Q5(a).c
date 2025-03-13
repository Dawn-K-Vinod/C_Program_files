#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    
    int temp=1;
    for (int i=1; i<=rows; i++) {
        for (int k=0; k<i; k++) {
            if (temp==1) {
                printf("1 ");
                temp=0;
            } 
            else {
                printf("0 ");
                temp=1;
            }
        }
        printf("\n");
    }
    return 0;
}
