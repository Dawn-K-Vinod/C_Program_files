/*
Author      : Dawn K Vinod
Date        : 14/02/2025
Description : Sorting an array of numbers using Bubble sort; Displaying the sorted array along with number of swaps taken to completely sort the array.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter how many numbers you want to input: ");
    scanf("%d",&n);
    
    int arr[n];
    for (int i=0; i<n; i++) {
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    
    int temp, swap_count=0;
    for (int i=0; i<(n-1); i++) {
        for (int k=0; k<(n-1-i); k++) {
            if (arr[k] > arr[k+1]) {
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
                swap_count++;
            }
        }
    }
    
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\nNo. of swaps: %d",swap_count);
    return 0;
}