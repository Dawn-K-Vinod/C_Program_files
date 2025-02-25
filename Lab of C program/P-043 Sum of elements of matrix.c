#include <stdio.h>
int main() {
	int row, col;
	printf("Enter the number of rows and columns: ");
	scanf("%d %d",&row,&col);
	
	int matrix[row][col];
	printf("\nEnter the elements of matrix of order(%dx%d):\n",row,col);
	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++) {
			printf("Enter element [%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\nThe given matrix of order(%dx%d):\n",row,col);
	int sum=0;
	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++) {
			printf("%d\t",matrix[i][j]);
			sum += matrix[i][j];
		}
		printf("\n");
	}
	printf("\nThe sum of all the elements of the given matrix(%dx%d) is: %d\n",row,col,sum);
	return 0;
}
