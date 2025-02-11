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
	
	int max=arr[0], min=arr[0], pos1=1, pos2=1;
	for (int i=0; i<n; i++) {
		if (arr[i] > max) {
			max=arr[i];
			pos1=i+1;
		}
		if (arr[i] < min) {
			min=arr[i];
			pos2=i+1;
		}
	}
	printf("\nLargest number: %d \nPosition: %d\n",max,pos1);
	printf("\nSmallest number: %d \nPosition: %d\n",min,pos2);
	return 0;
}
