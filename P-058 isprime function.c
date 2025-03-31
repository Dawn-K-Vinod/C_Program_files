#include <stdio.h>
#include <stdbool.h>

bool isprime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i*i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
