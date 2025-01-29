// program to find the largest of three numbers
#include <stdio.h>

int main() {
    int num1,num2,num3,largest;
    printf("Enter three numbers separated by space: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    largest = (num1>num2) ? 
                ((num1>num3) ? num1:num3) : 
                ((num2>num3) ? num2:num3);
    printf("Largest number is:%d",largest);
    return 0;
}
