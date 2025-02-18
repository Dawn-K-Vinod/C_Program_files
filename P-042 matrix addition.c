/*
Author      : Dawn K Vinod
Date        : 18/02/2025
Description : Addition of two matrices.
*/
#include <stdio.h>
// A fuction for reading the elements of a matrix.
void read_matrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("Enter the element of [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}
// A function to print the elements of a matrix.
void print_matrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row, col;
    printf("Enter the rows and columns of the first matrix: ");
    scanf("%d %d",&row,&col);
    int matrix_1[row][col]; 
    printf("\nReading the elements into Matrix-1 of order %dx%d:\n",row,col);
    read_matrix(row,col,matrix_1);
    
    int row2, col2;
    printf("\nEnter the rows and columns of the second matrix: ");
    scanf("%d %d",&row2,&col2);
    int matrix_2[row2][col2]; 
    printf("\nReading the elements into Matrix-2 of order %dx%d:\n",row2,col2);
    read_matrix(row2,col2,matrix_2);
    
    printf("\n");
    printf("Matrix-1:\n");
    print_matrix(row,col,matrix_1);
    printf("\nMatrix-2:\n");
    print_matrix(row2,col2,matrix_2);
    
    
    if (row!=row2 || col!=col2) {
        printf("\nAddition cannot be performed! \nTo add two matrices, their dimensions must be same.");
        return 0;
    }
    
    int result[row][col];
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            result[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
        printf("\n");
    }
    printf("The resultant matrix:\n");
    print_matrix(row,col,result);
    
    return 0;
}