/*
Author     : Dawn K Vinod
Description: Program shows how a structure is passed to and is used in user-defined functions in C.
*/
#include <stdio.h>

struct student {
    char name[20];
    int roll;
    float marks;
};

void display(struct student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct student s1 = {"John Doe", 101, 85.5};
    display(s1); // Passing structure to function
    return 0;
}
