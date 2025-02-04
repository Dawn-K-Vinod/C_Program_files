/*
Author     : Dawn K Vinod
Date       : 04/02/2025
Description: Largest digit in the given number.
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    
    int num_copy=num, rev=0, rem, largest=0;
    while (num_copy!=0) {
        rem = num_copy % 10;
        if (rem>largest) {
            largest=rem;
        }
        num_copy/=10;
    }
    printf("Largest digit in %d is: %d",num,largest);
    return 0;
}
