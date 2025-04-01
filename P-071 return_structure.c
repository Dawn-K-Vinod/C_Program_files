/*
Author     : Dawn K Vinod
Description: Returning of structures from a user-defined function.
*/
#include <stdio.h>

struct student {
    char name[20];
    int rollno;
    float marks;
};

struct student getdata(struct student s) {
    struct student s2;
    s2 = s;
    return s2;
}    

int main() {
    struct student s1 = {"Dawn", 101, 95.5};
    struct student s2;
    s2 = getdata(s1);
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s2.name, s2.rollno, s2.marks);
    return 0;
}
