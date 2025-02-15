/*
Author      : Dawn K Vinod
Date        : 15/02/2025
Description : Program to display the distinct digits from the given number.
*/

#include <stdio.h>
int main () {
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	printf("Distinct digits in the number `%d` are: ",num);
	int num_copy1=num, rem1;
	//Outer loop for taking each digit from the given number
	while (num_copy1 != 0) {
		rem1 = num_copy1 % 10;
		num_copy1 /= 10;
		
		int num_copy2=num_copy1, rem2;
		// inner loop to iterate through the given number and check if the digit taken is repeating or not
		while (num_copy2!=0) {
			rem2=num_copy2 % 10;
			if (rem1==rem2) {
				break;
			}
			num_copy2 /= 10;
		}
		if (num_copy2==0) {
			printf("%d,",rem1);
		}
	}
	printf("\n");
	return 0;
}
