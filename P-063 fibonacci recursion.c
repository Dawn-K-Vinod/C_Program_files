#include <stdio.h>

int fib(int n) {
	if (n==0)
	return 0;
	if (n==1)
	return 1;
	
	return fib(n-1)+fib(n-2);
}

int main() {
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	
	printf("Fibonacci series upto %d terms:\n",num);
	for (int i=0; i<num; i++) {
		printf("%d ",fib(i));
	}
	return 0;
}
