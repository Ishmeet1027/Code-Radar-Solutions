// #include <stdio.h>

// void fibonacciSeries(int n) {
//     int a = 0, b = 1, c;
//     printf("%d %d ", a, b); // Print first two Fibonacci numbers

//     for (int i = 2; i < n; i++) { 
//         c = a + b;
//         printf("%d ", c);
//         a = b;
//         b = c;
//     }
//     printf("\n");
// }


#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, c;

    if (n == 1) {  // Handle n=1 case separately
        printf("%d\n", a);
        return;
    }

    printf("%d %d ", a, b); // Print first two Fibonacci numbers

    for (int i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}