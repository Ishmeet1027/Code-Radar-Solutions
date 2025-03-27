#include <stdio.h>

int long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to print factorials of numbers in the range [a, b]
void factorialRange(int a, int b) {
    if (a > b || a < 0 || b < 0) {
        printf("Invalid range\n");
        return;
    }

    for (int i = a; i <= b; i++) {
        printf("%lld\n", factorial(i));
    }
}

// int main() {
//     int start, end;
//     scanf("%d %d", &start, &end);
//     factorialRange(start, end);
//     return 0;
// }
