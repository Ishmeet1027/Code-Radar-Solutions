#include<stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    for (int i =1;i<=a;i++) {
        char c= 'A';
        for (int j =1; j<=i;j++) {
            printf("%c ",c);
        }
        printf("\n");
    }
    return 0;
}