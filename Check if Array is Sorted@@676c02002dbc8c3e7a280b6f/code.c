#include<stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    int array[a];
    for (int i =0;i<a;i++)  {
        scanf("%d",&array[i]);
    }
    for (int i =0;i<a;i++) {
        int max = array[0];
        if (array[i]>max) {
            int temp;
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
            i =0;
        } else {
            i++;
        }
        
    }
    printf("%d",max);
    return 0;
}