#include <stdio.h>
int main () {
    char[50];
    char a;
    scanf("%s",&a);
    printf("You entered: %[^/n]",a);
    return 0;
}