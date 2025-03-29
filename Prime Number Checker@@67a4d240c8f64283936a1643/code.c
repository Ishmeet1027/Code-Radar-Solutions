// int isPrime( int num) {
//     int prime;
//     for (int i = 2;i<=num;i++) {
//         if (num%i==0) {
//             return 1;
//         }
//     }
//     return 0;
// }



#include <stdio.h>
#include <math.h>
int sqrt;
int isPrime(int num) {
    if (num < 2) return 0; // 0 and 1 are not prime
    for (int i = 2; i <= sqrt(num); i++) { 
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}