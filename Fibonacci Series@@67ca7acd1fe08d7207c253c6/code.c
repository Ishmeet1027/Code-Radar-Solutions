#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, c;
    printf("%d %d ", a, b); // Print first two Fibonacci numbers
    if (a==0) {
        printf("0");
    }

    for (int i = 2; i < n; i++) { 
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}