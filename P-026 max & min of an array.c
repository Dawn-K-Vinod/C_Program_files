/*
Author      : Dawn K Vinod
Date        : 06/02/2025
Description : Program to Find the Maximum and minimum in an array.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter how many numbers you want to input: ");
    scanf("%d",&n);

    if (n<2) {
        printf("You should atleast input two numbers to find largest & smallest.");
        return 0;
    }
    
    int numbers[n];
    for (int i=0; i<n; i++) {
        printf("Enter number %d: ",i+1);
        scanf("%d",&numbers[i]);
    }
    
    int largest=numbers[0], smallest=numbers[0];
    for (int i=1; i<n; i++) {
        if (numbers[i] > largest) {
            largest=numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest=numbers[i];
        }
    }
    printf("The largest number is: %d\n",largest);
    printf("The smallest number is: %d\n",smallest);
    return 0;
}