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
	printf("\nEnter the number to find its frequency: ");
	scanf("%d",&key);
	
	int freq=0;
	for (int i=0; i<n; i++) {
		if (arr[i]==key) {
			freq++;
		}
	}
	
	printf("The frequency of number %d is : %d\n",key,freq);
	return 0;
}
