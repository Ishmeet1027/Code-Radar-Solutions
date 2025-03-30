#include<stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    for (int i =1;i<=a;i++) {
        int c = 1;
        int n =i-1;
        for (int j =i;j<a;j++) {
            printf(" ");
        }
        for (int k =1;k<=i;k++) {
            printf("%d",c);
            c++;
        }
        for (int j=1 ;j<=i-1;j++) {
            printf("%d",n);
            n--;
        }
        printf("\n");
    }
    return 0;
}