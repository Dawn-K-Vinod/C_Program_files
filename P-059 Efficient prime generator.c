#include <stdio.h>
#include <stdbool.h>

bool isprime(int num) {        
    for (int i = 3; i*i <= num; i += 2) {
        if (num % i == 0) { 
            return false; // not prime
        }
    }
    return true; // is prime
}

int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    if (limit < 2) return 0;
    if (limit >= 2) printf("2 ");
    if (limit >= 3) printf("3 ");

    int i = 1, var1, var2;
    while (1) {
        var1 = 6 * i - 1;
        var2 = 6 * i + 1;
        
        if (var1 > limit && var2 > limit) break;
        if (var1 <= limit && isprime(var1)) printf("%d ", var1);
        if (var2 <= limit && isprime(var2)) printf("%d ", var2);
        i++;
    }
    return 0;
}
