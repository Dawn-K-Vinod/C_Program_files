// program to swap two variables without a third variable
// This can be done faster using bitwise XOR operator.
#include <stdio.h>

int main() {
    int a=5,b=3;
    printf("Before swaping, \na:%d \nb:%d\n\n",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("After swaping, \nA:%d \nB:%d\n",a,b);
    return 0;
}
