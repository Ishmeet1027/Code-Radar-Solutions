#include <stdio.h>
int main () {
    int a,b,c ;
    scanf("%d %d %d", &a,&b,&c);
    if (a==b && a==c && b==c) {
        printf("Equilateral");
    } else if (a==b || b==a && a!=b) {
        printf("Isosceles");
    } else {
        printf("Scalene");
    }
     return 0;
}