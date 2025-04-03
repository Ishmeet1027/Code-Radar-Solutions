#include<stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    int array[a];
    for (int i =1;i<=a;i++) {
        scanf("%d ",&a);
    }
    int max = array[0];
    for (int i =1;i<=a;i++) {
        if (array[i]>max) {
            max = array[i];
        }
    }
    int min = array[0];
    for (int i =1;i<=a;i++) {
        if (min>array[i]) {
            min = array[i];
        }
    }
    for (int i =1;i<=a;i++) {
        printf("%d %d",max,min);
    }
    return 0;
    
}