#include <stdio.h>
int main () {
    int a,b,c ;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c) {
        if (c*c + b*b == a*a) {
            printf("Valid");
        } else {
            printf("Invalid");
        } 
    } else if  (b>c && b>a) {
        if (c*c + a*a == b*b) {
            printf("Valid");
        } else {
            printf("Invalid");
        }
    } else {
        if (c>a && c>b) {
        printf("Valid");
    } else {
        printf("Invalid");
    }
    return 0;
}
}