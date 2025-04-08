#include <stdio.h>
int x=10;

void test() {
	static int y=1;
	y++;
	printf("%d ",y);
}

int main() {
	auto int a=5;
	register int b=20;
	printf("Value of automatic storage class variable `a` : %d\n",a);
	printf("Value of register storage class variable `b` : %d\n",b);
	printf("Value of external storage class variable `x` : %d\n",x);
	printf("Values of static storage class variables `y` for 3 iterations: ");
	test();test();test();
	printf("\n");
	return 0;
}
