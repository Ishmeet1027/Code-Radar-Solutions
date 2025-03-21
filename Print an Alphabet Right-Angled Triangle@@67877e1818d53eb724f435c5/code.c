#include<stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    char n = 'A';
    for (int i =1; i<=a;i++) {
        for (int j =1; i<=i; j++) {
            printf("%c",n);
            n++ ;
        }
        printf("\n");
    }
    return 0;
}