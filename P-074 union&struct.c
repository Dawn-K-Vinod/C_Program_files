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

/*
Here note that the size of structure will be displayed as 12 instead of `5(char) + 4(int) = 9` what you expected,
this is due to a thing called PADDING (https://www.tutorialspoint.com/cprogramming/c_structure_padding_and_packing.htm),
and this is not a problem, it is actually for the faster accessing of data by CPU, 
this is based on the CPU architecture.
*/
