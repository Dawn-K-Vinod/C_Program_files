#include <stdio.h>

int main() {
    int limit;
    printf("Enter how many numbers you want to input: ");
    scanf("%d",&limit);
    
    int numbers[limit];
    
    for (int i=0; i<limit; i++) {
        printf("Enter number-%d: ",i+1);
        scanf("%d",&numbers[i]);
    }
    
    int sum=0;
    for (int i=0; i<limit; i++) {
        sum += numbers[i];
    }
    
    float average;
    average = (float)sum/limit;
    printf("The average is: %.2f",average);

    return 0;
}
