#include <stdio.h>
int main() {
	int row1, col1;
	printf("Enter the rows and columns of matrix 1:");
	scanf("%d %d", &row1, &col1);
	
	int matrix_1[row1][col1];
	printf("Enter the elements of matrix 1 of order(%dx%d): \n",row1,col1);
	for (int i=0; i<row1; i++) {
		for (int j=0; j<col1; j++) {
			scanf("%d",&matrix_1[i][j]);
		}
	}
	int row2, col2;
	printf("\nEnter the rows and columns of matrix 2:");
	scanf("%d %d", &row2, &col2);
	
	int matrix_2[row2][col2];
	printf("Enter the elements of matrix 2 of order(%dx%d): \n",row2,col2);
	for (int i=0; i<row2; i++) {
		for (int j=0; j<col2; j++) {
			scanf("%d",&matrix_2[i][j]);
		}
	}
	
	if (row1!=row2 || col1!=col2) {
		printf("\nMatrix addition cannot be performed!!\n"
		"To perform matrix addition the dimensions of two matrices must be same.\n");
		return 0;
	}
	
	printf("\nMatrix 1:\n");
	for (int i=0; i<row1; i++) {
		for (int j=0; j<col1; j++) {
			printf("%d\t",matrix_1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatrix 2:\n");
	for (int i=0; i<row2; i++) {
		for (int j=0; j<col2; j++) {
			printf("%d\t",matrix_2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nResultant matrix:\n");
	int result[row1][col1];
	for (int i=0; i<row1; i++) {
		for (int j=0; j<col1; j++) {
			result[i][j] = matrix_1[i][j] + matrix_2[i][j];
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
