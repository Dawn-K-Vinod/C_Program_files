#include <stdio.h>

struct s_def {
	char c1[5];
	int s_float;
}s;
union u_def {
	char u_ch;
	int u_int;
	float u_float;
}u;

int main() {
	printf("The size of the given structure is: %ld\n",sizeof(s));
	printf("The size of the given union is: %ld\n",sizeof(u));
	return 0;
}
