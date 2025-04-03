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
        if (array[a]>max) {
            array[a];
        }
    }
    int min = array[0];
    for (int i =1;i<=a;i++) {
        if (min>array[a]) {
            array[a];
        }
    }
    for (int i =1;i<a;i++) {
        printf("%d %d",array[a],array[a]);
    }
    return 0;
    
}