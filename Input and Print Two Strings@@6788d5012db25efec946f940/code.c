#include <stdio.h>
int main () {
    char a[80];
    char b[80];
    char a,b;
    scanf("%[^\n] %[^\n]",&a,&b);
    printf("You entered: %s and %s",a,b);
    return 0;
}