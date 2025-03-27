#include<stdio.h>
int factorialRange (int a, int b) {
    int fact =1;
    for (int i=a;i<=b;i++) {
        fact = fact*fact(a-1);
        return 0 ;
    }
}