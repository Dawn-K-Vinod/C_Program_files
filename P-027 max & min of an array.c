/*
Author      : Dawn K Vinod
Date        : 12/02/2025
Description : Program to display the maximum and minimum in an array along with its positions (not index).
*/
/* 
If you want to display the index of the max and min instead of their position,  
initialize `pos1` and `pos2` to `0` instead of `1` on line 23,  
and remove the `+1` from `pos1 = i + 1;` and `pos2 = i + 1;` on lines 27 and 31.
*/
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
