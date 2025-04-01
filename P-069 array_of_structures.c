/*
Author     : Dawn K Vinod
Description: This program defines a structure to store student details including name, roll number, marks in three subjects, total marks, and average marks. 
It allows the user to input data for multiple students and displays the information in a formatted manner.
*/
#include <stdio.h>

struct student {
    char name[30];
    int roll;
    float marks[3], total, avg;
};

struct student read_student_data(struct student s) {
    printf("Enter name: ");
    scanf(" %29[^\n]", s.name); // if you enter more than 29 characters, then you are cooked fr.
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    float total=0,avg=0;
    for (int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
        total+=s.marks[i];
    }
    avg=total/3;
    s.total=total;
    s.avg=avg;
    return s;
}

void display_student_data(struct student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    for (int i = 0; i < 3; i++) {
        printf("Marks for subject %d: %.2f\n", i + 1, s.marks[i]);
    }
    printf("Total Marks: %.2f\n", s.total);
    printf("Average Marks: %.2f\n", s.avg);
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        students[i]=read_student_data(students[i]);
    }
    printf("\nDisplaying student details:\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("\nSTUDENT %d:\n", i + 1);
        display_student_data(students[i]);
    }
    return 0;
}
