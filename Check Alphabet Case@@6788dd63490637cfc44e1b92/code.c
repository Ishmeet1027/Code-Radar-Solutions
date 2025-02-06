#include <stdio.h>
int main () {
    char a;
    scanf("%c",&a);
    if (65>=a && 90<=a) {
        printf("Uppercase");
    } else {
        printf("Lowercase");
    }
    return 0;
}