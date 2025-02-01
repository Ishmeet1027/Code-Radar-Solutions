#include <stdio.h>
int main () {
    char [50];
    char a,b;
    scanf("%[^\n] %[^\n]",&a,&b);
    printf("You entered: %s and %s",a,b);
    return 0;
}