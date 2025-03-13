
#include <stdio.h>
#include <math.h>

int main() {
    int lower_limit, upper_limit;
    printf("Enter the lower limit and upper limit: ");
    scanf("%d %d",&lower_limit,&upper_limit);
    
    printf("Prime numbers between %d and %d: ",lower_limit,upper_limit);
    
    int num=lower_limit;
    if (num<=2) {
        printf("2 ");
        num=3;
    }
    
    if (num % 2 == 0) { num++; }
    int flag=1;
    // To generate each number from the given range.
    for (; num<=upper_limit; num+=2) {
        flag=1;
        for (int i=3; i <= sqrt(num); i++) {
            if (num % i == 0) {
                flag=0;
                break;
            }
        }
        if (flag) {
            printf("%d ",num);
        }
    }
    return 0;
}
