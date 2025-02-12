/*
Author      : Dawn K Vinod
Date        : 11/02/2025
Description : Program to calculate the sum of first and last digits of a number (math module used).
*/
#include <stdio.h>
#include <math.h>

int main() {
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	int length=0, num_copy=num, first_digit, last_digit;
	
    while (num_copy!=0) {
        num_copy/=10;
        length++;
    }
    
    first_digit=num / (int) (pow(10,length-1));
    last_digit=num % 10;
    
	printf("%d + %d = %d\n",first_digit, last_digit, 
	first_digit+last_digit);
	return 0;
}
