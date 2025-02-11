#include <stdio.h>
int main() {
	int n;
	printf("Enter the number of elements you want to input: ");
	scanf("%d",&n);
	
	int arr[n];
	for (int i=0; i<n; i++) {
		printf("Enter number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int  arr_copy[n];
	for (int i=0; i<n; i++) {
		arr_copy[i]=arr[i];
	}
	
	printf("The Copied array: ");
	for (int i=0; i<n; i++) {
		printf("%d ",arr_copy[i]);
	}
	
	printf("\n");
	return 0;
}
