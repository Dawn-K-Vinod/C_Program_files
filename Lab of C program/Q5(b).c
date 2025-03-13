#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    printf("\nThe factors of %d are:\n",num);
    
    int i=1;
    while (i<=num) {
        if (num%i==0) {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}
