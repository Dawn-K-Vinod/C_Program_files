// Armstrong number example is 153, that is 1^3 + 5^3 +3^3 = 153
#include <stdio.h>
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    int num_copy=num, cube_sum=0;
    while (num_copy!=0) {
        cube_sum += (num_copy%10) * (num_copy%10) * (num_copy%10);
        num_copy = num_copy/10;
    }
    if (num==cube_sum) {
        printf("%d is an armstrong number.",num);
    } else {
        printf("%d is not an armstrong number.",num);
    }
    return 0;
}