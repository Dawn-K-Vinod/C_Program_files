#include <stdio.h>

int main() {
    int N;
    printf("Enter a numbers: ");
    scanf("%d",&N);
    printf("Natural numbers upto %d: ",N);
    
    int i=1;
    while (i<=N) {
        printf("%d ",i);
        i++;
    }
    return 0;
}
