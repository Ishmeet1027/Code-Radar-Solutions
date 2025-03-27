#include<stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    int array[a];
    for (int i =1;i<=a;i++) {
        scanf("%d",array[i]);
    }
    for (int i =1;i<=a;i++) {
        printf("%d",array[i]);
    }
    return 0;
}