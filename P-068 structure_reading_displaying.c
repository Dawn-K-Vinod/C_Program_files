/*
Author     : Dawn K Vinod
Description: This program demonstrates the use of structures in C to store and display employee details.
*/
#include <stdio.h>

struct employee {
    char name[15];
    int id;
    float salary;
};

int main() {
    int n;
    printf("Enter the numbers of employees: ");
    scanf("%d",&n);
    // Reading the employee details
    printf("******Reading******\n");
    struct employee arr[n];
    for (int i=0; i<n; i++) {
        printf("\nEnter the details of employee-%d,\n",i+1);
        printf("Name: ");
        scanf(" %14[^\n]",arr[i].name);
        printf("ID: ");
        scanf("%d",&arr[i].id);
        printf("Salary: ");
        scanf("%f",&arr[i].salary);
    }
    printf("\n");
    //Displaying the employee details
    printf("******Displaying******\n");
    for (int i=0; i<n; i++) {
        printf("Employee-%d\n",i+1);
        printf("Name: %s\n",arr[i].name);
        printf("ID: %d\n",arr[i].id);
        printf("Salary: %.2f\n\n",arr[i].salary);
    }
    return 0;
}
