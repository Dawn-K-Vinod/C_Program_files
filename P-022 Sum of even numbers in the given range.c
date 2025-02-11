/*
Author      : Dawn K Vinod
Date        : 06/02/2025
Description : Program to find the Sum of all the even numbers in a given range.(Exclusive of limit)
*/
#include <stdio.h>

int main() {
    int lower_limit, upper_limit;
    printf("Enter the lower limit and upper limit separated by space:");
    scanf("%d %d",&lower_limit,&upper_limit);
    
    if (upper_limit<lower_limit) {
        lower_limit+=upper_limit;
        upper_limit=lower_limit-upper_limit;
        lower_limit=lower_limit-upper_limit;
    }
    
    int i=lower_limit;
    if (lower_limit%2!=0) {
        i=lower_limit+1;
    }
    int sum=0;
    for (;i<upper_limit;i+=2) {
        sum+=i;
    }
    printf("The sum of even numbers in the range %d to %d is:%d",lower_limit,upper_limit,sum);
    return 0;
}