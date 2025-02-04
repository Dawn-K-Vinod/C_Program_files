/*
Author     : Dawn K Vinod
Date       : 04/02/2025
Description: Check whether the given number is prime or not.
*/
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    
    if (num%2==0) {
        printf("%d is not a prime number.");
    
    } else {
        for (int i=3; i<(num/3+1); i+=2) {
            if (num%i==0) {
                printf("%d is a not prime number.",num);
                return 0;
            } 
        }
        printf("%d is a prime number.",num);
    }
    return 0;
}
