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
	
	if (col1!=row2) {
		printf("\nMatrix multiplicaton cannot be performed!!\n"
		"To perform matrix multiplication, the number of columns of matrix 1 and number of rows of matrix 2 must be same.\n");
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
	
	// multiplying
	int product[row1][col2];
	for (int i=0; i<row1; i++) {
		for (int j=0; j<col2; j++) {
			product[i][j]=0;
			for (int k=0; k<col1; k++) {
				product[i][j] += matrix_1[i][k] * matrix_2[k][j];
			}
		}
	}
	printf("\nProduct matrix:\n");
	for (int i=0; i<row1; i++) {
		for (int j=0; j<col2; j++) {
			printf("%d\t",product[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
