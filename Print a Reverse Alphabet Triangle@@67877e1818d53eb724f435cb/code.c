#include<stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    for (int i =1; i<=a;i++) {
        char c = 'A';
        for (int j =i; j<=a;j++) {
            printf("%c ",c);
            c++ ;
        }
        printf("\n");
    }
    return 0;
}