#include<stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    for (int i =1;i<=a;i++) {
        int c = 1;
        for (int j =i;j<a;j++) {
            printf(" ");
        }
        for (int k =1;k<=a;k++) {
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;
}