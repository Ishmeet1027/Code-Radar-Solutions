#include<stdio.h>
int bubbleSort(int arr[], int n) {
    int max = arr[0];
    for (int i=0;i<n;i++) {
        if (arr[i]>max) {
            max = arr[i];
        }
    }
    return 0;
}
int printArray(int arr[], int n) {
    printf("%d ",arr[i]);
    return 0;
}