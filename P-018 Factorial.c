#include <stdio.h>

int main() {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    
    if (num<0) {
        printf("Invalid. Negative numbers cannot have factorial.\n");
        return 0;
    }
    
    int i=1,fact=1;
    while (i<=num) {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is: %d",num,fact);
    return 0;
}