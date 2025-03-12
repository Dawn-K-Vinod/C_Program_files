#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool isprime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i*i <= num; i += 6)
        if (num % i == 0 || num % (i+2) == 0)
            return false;
    return true;
}

int main() {
    clock_t start, end;
    double time_taken;
    
    int limit = 10000;
    printf("The limit: %d\n",limit);
    start = clock();
    
    printf("2 3 ");
    
    for (int k = 1; ; k++) {
        int p1 = 6*k - 1, p2 = 6*k + 1;
        if (p1 >= limit && p2 >= limit) break;
        
        if (p1 < limit && isprime(p1)) printf("%d ", p1);
        if (p2 < limit && isprime(p2)) printf("%d ", p2);
    }
    end = clock();
    // Calculate the time taken in seconds
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\n\nTime taken: %f seconds\n", time_taken);
    return 0;
}
