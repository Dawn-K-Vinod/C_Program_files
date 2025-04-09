/*
Author      : Dawn K Vinod
Description : Pointer, that can store the address of another variable
*/
#include <stdio.h>

int main() {
    int num = 42;
  
    int *p; // declaring a pointer to int datatype
    p = &num; // initializing the address of the variable `num` to the pointer
    // you can combine lines 10 & 11 into ```int *p = &num;```
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Pointer p stores: %p\n", p);
    printf("Value pointed by p: %d\n", *p);

    return 0;
}
