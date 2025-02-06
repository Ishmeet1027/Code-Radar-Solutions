#include <stdio.h>
int main () {
    char a;
    scanf("%c",&a);
    if (65<=a && 90>=a) {
        printf("Uppercase");
    } else if(97<=a && 122>=a) {
        printf("Lowercase");
    } else {
        printf("Not an alphabet");
    }
    return 0;
}