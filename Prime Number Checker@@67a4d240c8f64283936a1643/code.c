#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) return 0; // 0 and 1 are not prime
    if (num == 2 || num == 3) return 1; // 2 and 3 are prime
    if (num % 2 == 0 || num % 3 == 0) return 0; // Eliminate multiples of 2 and 3

    // Check divisibility from 5 to sqrt(n), skipping even numbers
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}
