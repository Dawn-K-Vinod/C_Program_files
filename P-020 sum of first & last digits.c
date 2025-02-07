/*
Author      : Dawn K Vinod
Date        : 06/02/2025
Description : Program to calculate the sum of first and last digits of a number.
*/
#include <stdio.h>
int main() {
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	int last_digit = num%10;
	int num_copy=num, length=0, rem;
	while (num_copy!=0) {
		rem=num_copy%10;
		num_copy/=10;
	}
	printf("%d + %d = %d\n",rem,last_digit,rem+last_digit);
	return 0;
}
