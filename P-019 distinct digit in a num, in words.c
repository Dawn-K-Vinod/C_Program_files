#include <stdio.h>
int main () {
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
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
			switch (rem1) {
				case 0: printf("Zero,");break;
				case 1: printf("One,");break;
				case 2: printf("Two,");break;
				case 3: printf("Three,");break;
				case 4: printf("Four,");break;
				case 5: printf("Five,");break;
				case 6: printf("Six,");break;
				case 7: printf("Seven,");break;
				case 8: printf("Eight,");break;
				case 9: printf("Nine,");break;
				default: printf("Invalid");
			}
		}
	}
	printf("\n");
	return 0;
}
