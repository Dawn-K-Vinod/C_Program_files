#include <stdio.h>
#include <math.h>

int isprime(int num) {
    if (num%10!=5) {
        if (num<2) { return 0;}
        if (num==2) { return 1;}
        if (num%2==0) { return 0;}
        
        for (int i=3; i<sqrt(num)+1; i+=2) {
            if (num%i==0) { return 0;}
        }
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    
    printf("2 3 5 ");
    int i=1, var1, var2;
    while (i<limit) {
        var1=6*i-1;
        var2=6*i+1;
        
        if (var1>limit || var2>limit) { break;}
        
        if (isprime(var1)) {printf("%d ",var1);}
        if (isprime(var2)) {printf("%d ",var2);}
        i++;
    }
    return 0;
}
