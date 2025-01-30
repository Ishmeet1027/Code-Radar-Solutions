#include <stdio.h>
int main () {
    float a;
    scanf("%f",&a);
    if (a<=18) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }
    return 0;
}