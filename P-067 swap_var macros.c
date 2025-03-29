/*
Author      :Dawn K Vinod
Date        :26/03/2025
Description :C program to swap the values inside two variables, using macros.
*/
#include <stdio.h>
#define swap_var_val(num1,num2) temp=num1; num1=num2; num2=temp

int main() {
	int a, b, temp;
	printf("Enter two numbers:");
	scanf("%d %d",&a, &b);
	printf("Before swapping:\na=%d\nb=%d\n",a,b);
	swap_var_val(a,b);
	printf("After swapping:\na=%d\nb=%d\n",a,b);
	return 0;
}
