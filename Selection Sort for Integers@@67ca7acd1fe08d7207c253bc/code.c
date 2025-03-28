#include<stdio.h>
int selectionSort(int arr, int n) {
    i =0;
    while(i<n-1) {
        if (arr[i]>arr[i+1]) {
            int temp;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1]=temp;
            i=0;
        } else {
            i++;
        }
    }
    return 0;
}

int printArray(int arr, int n ){
    for (int i =0;i<a;i++) {
        printf("d ",arr[i]);
    }
    return 0;
}