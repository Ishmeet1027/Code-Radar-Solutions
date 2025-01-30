#include <stdio.h>
int main () {
    float a;
    scanf("%f",&a);
    if (a>=1 && a<=100) {
        printf("In Range");
    } else {
        printf("Out of Range");
    }
    return 0;
}