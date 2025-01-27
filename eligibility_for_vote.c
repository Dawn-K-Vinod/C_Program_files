#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=18){
        printf("Eligible for vote.");
    }
    else {
        printf("Not eligible for vote.");
    }
    return 0;
}