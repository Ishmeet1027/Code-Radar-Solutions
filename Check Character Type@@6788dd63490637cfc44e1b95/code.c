#include <stdio.h>
int main () {
    int b;
    scanf("%d",&b);
    printf("Digit");
    char a;
    scanf("%c",&a);
    if (a=='a' || a=='e' || a=='i' || a=='O' || a=='u') {
        printf("Vowel");
    } else if (a=='!' || a=='@' || a=='#' || a=='$' || a=='%' || a=='^' || a=='&' || a=='*') {
        printf("Special Character");
    } else {
        printf("Consonant");
    }
    return 0;
}