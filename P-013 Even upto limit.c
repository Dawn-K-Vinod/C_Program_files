/*
Author     : Dawn K Vinod
Date       : 04/02/2025
Description: printing even numbers upto the limit
*/
#include <stdio.h>
int main() {
    int limit;
    printf("Enter the limit to display even numbers upto that limit:");
    scanf("%d",&limit);
    
    printf("Even numbers upto %d: ",limit);
    for (int i=2;i<=limit;i+=2) {
        printf("%d ",i);
    }
    return 0;
}
