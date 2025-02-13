/*
Author      : Dawn K Vinod
Date        : 13/02/2025
Description : Program to find the roots of a quadratic equation.
*/
#include <stdio.h>
#include <math.h>

int main() {
    // Quadratic equation is : ax² + bx + c
    int a, b, c;
    printf("Quadratic equation is of the form ax² + bx + c\n");
    printf("Enter `a` the coefficient of x²: ");
    scanf("%d",&a);
    printf("Enter `b` the coefficient of x: ");
    scanf("%d",&b);
    printf("Enter `c` the constant: ");
    scanf("%d",&c);
    
    //printf("\nGiven quadratic equation: %dx² + %dx + %d\n",a,b,c);
    
    if (a==0) {
        printf("The given equation is NOT a quadratic equation.\n");
        return 0;
    }
    
    int discriminant;
    discriminant = (b*b)-(4*a*c);
    
    if (discriminant > 0) {
        float root1, root2;
        root1 = (-b + sqrt(discriminant))/(2.0*a);
        root2 = (-b - sqrt(discriminant))/(2.0*a);
        printf("(%dx² + %dx + %d) has two distinct real roots: %.2f and %.2f\n",a, b, c, root1, root2);
    }
    else if (discriminant == 0) {
        float root;
        root = -b/(2.0*a);
        printf("(%dx² + %dx + %d) has one real root: %.2f",
        a, b, c, root);
    }
    else {
        float real_part, complex_part;
        real_part = -b/(2.0*a);
        complex_part = sqrt(-discriminant)/(2.0*a);
        printf("(%dx² + %dx + %d) has complex roots: %.2f ± %.2f𝑖",
        a ,b ,c ,real_part, complex_part);
    }
    return 0;
}