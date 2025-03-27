#include<stdio.h>
int factorialRange (int a, int b) {
    int factorialRange =1;
    for (int i=a;i<=b;i++) {
        factorialRange = factorialRange*factorialRange(a-1);
        return factorialRange ;
    }
}