
#include <stdio.h>

int main() {
    int row, col;
    printf("Input the dimensions of Matrix you want to create.,\n");
    printf("Number of rows: ");
    scanf("%d",&row);
    printf("Number of columns: ");
    scanf("%d",&col);
    printf("\n");
    
    int matrix[row][col];
    
    for (int i=0; i<row; i++) {
        for (int k=0; k<col; k++) {
            printf("Element [%d][%d] : ",i,k);
            scanf("%d",&matrix[i][k]);
        }
    }
    
    printf("\nMatrix[%d][%d]:\n",row,col);
    for (int i=0; i<row; i++) {
        for (int k=0; k<col; k++) {
            printf("%d\t",matrix[i][k]);
        }
        printf("\n");
    }
    return 0;
}