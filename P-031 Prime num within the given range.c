#include <stdio.h>

int main() {
    int lower_limit, upper_limit;
    printf("Enter the lower limit and upper limit :");
    scanf("%d %d",&lower_limit,&upper_limit);
    
    if (lower_limit<2) {
        printf("\nYou have entered a number less than 2!!\nBelow number 2, prime numbers does not exist.");
        return 0;
    }
    
    int num = lower_limit;
    if (lower_limit % 2 == 0) {
        num = lower_limit+1;
    }
    printf("Prime numbers between %d and %d: ",lower_limit,upper_limit);
    if (lower_limit==2) {
        printf("2 ");
    }
    
    // To generate each number from the given range.
    for (; num<=upper_limit; num+=2) {
        int i=2;
        // To check whether the generated number is prime.
        for (; i<num; i++) {
            if (num % i == 0) {
                break;
            }
        }
        if (i==num) {
            printf("%d ",num);
        }
    }
    return 0;
}