/*
Author      : Dawn K Vinod
Date        : 12/02/2025
Description : Program to display all the prime numbers within a range.
*/
#include <stdio.h>
#include <math.h>

int is_prime(int num) {
    if (num<2) {return 0;}
    if (num==2) {return 1;}
    int limit = sqrt(num);
    
    for (int i=2; i <= limit; i++) {
        if (num % i == 0) {return 0;}
    }
    return 1;
}

int main() {
    int lower_limit, upper_limit;
    printf("Enter the lower limit and upper limit: ");
    scanf("%d %d",&lower_limit,&upper_limit);
    
    printf("Prime numbers between %d and %d: ",lower_limit,upper_limit);
    int num = lower_limit;
    
    if (num <= 2) { 
        printf("2 "); 
        num=3; 
    }
    if (num % 2 == 0) { num++; }
    
    // To generate each number from the given range.
    for (; num<=upper_limit; num+=2) {
        if (is_prime(num)) {
            printf("%d ",num);
        }
    }
    return 0;
}