/*
Author     : Dawn K Vinod
Description: Array of structures to enter multiple records of students easily, which reduces redundancy and makes the code more readable.
*/
#include <stdio.h>

struct student {
    char name[20];
    int roll_no;
    float marks;
};

int main() {
    struct student s[3];//you can declare this outside main(), that is, at the end of student struct definition, before semicolon. 
    for (int i = 0; i < 3; i++) {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
/*
-----------------------------------------------------------------------------------------------------------------
For making this program a user friendly one, you can ask for the number of students to be entered 
and then use that value to declare the array and use it in the for loop.
------------------------------------------------------------------------------------------------------------------
*/
