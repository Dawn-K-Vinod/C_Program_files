/*
Author     : Dawn K Vinod
Date       : 31/01/2025
Description: A simple calculator
*/

#include <stdio.h>

int main() {
    float num1,num2;
    char op;
    
    printf("Enter the first number: ");
    scanf("%f",&num1);
    
    printf("Enter the operator(+,-,*,/,%): ");
    scanf(" %c",&op);
    
    printf("Enter the second number: ");
    scanf("%f",&num2);
    
    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
            break;
            
        case '/':
            if (num2!=0) {
                printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);   
            } else {
                printf("Cannot be divisible by Zero.");
            }
            break;
            
        case '%':
            if (num2!=0) {
                printf("%.2f %% %.2f = %d",
                num1,num2,(int)num1%(int)num2);
            } else {
                printf("Cannot be divisible by Zero.");
            }
            break;
            
        default:
            printf("Invalid Operator.");
    }
    return 0;
}
