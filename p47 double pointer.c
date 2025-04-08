#include <stdio.h>

int main() {

	int x, *p, **q;
	printf("Enter a number: ");
	scanf("%d",&x);
	p=&x;
	q=&p;
	**q += 5;
	printf("Value of the given number after adding 5, using pointer arithmetic: %d\n",x);
	return 0; 
}

