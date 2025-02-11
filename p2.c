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
	
	int key;
	printf("\nEnter the number you want to search: ");
	scanf("%d",&key);
	
	for (int i=0; i<n; i++) {
		if (arr[i]==key) {
			printf("Key found at position %d.\n",i+1);
			return 0;
		}
	}
	printf("Key not found!\n");
	return 0;
}
