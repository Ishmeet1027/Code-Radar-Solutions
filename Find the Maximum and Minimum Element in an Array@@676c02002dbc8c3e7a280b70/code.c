// #include<stdio.h>
// int main () {
//     int a;
//     scanf("%d",&a);
//     int array[a];
//     for (int i =1;i<=a;i++) {
//         scanf("%d",&array[a]);
//     }
//     int max = array[0];
//     for (int i =0;i<a;i++) {
//         if (array[i]>max) {
//             max = array[i];
//         }
//     }
//     int min = array[0];
//     for (int i =0;i<a;i++) {
//         if (min>array[i]) {
//             min = array[i];
//         }
//     }
//     for (int i =0;i<a;i++) {
//         printf("%d %d",max,min);
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int array[a];

    // Input elements correctly
    for (int i = 0; i < a; i++) { 
        scanf("%d", &array[i]); 
    }

    int max = array[0];
    int min = array[0];

    // Find max and min correctly
    for (int i = 1; i < a; i++) { 
        if (array[i] > max) { 
            max = array[i]; 
        }
        if (array[i] < min) { 
            min = array[i]; 
        }
    }

    // Print the result only once
    printf("%d %d\n", max, min);

    return 0;
}
