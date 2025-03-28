#include<stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    for (int i =0;i<=a;i++) {
        int c = 1;
        for (int j =i;j<a;j++) {
            printf(" ");
        }
        for (int k =1;k<=2*i-1;k++) {
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}