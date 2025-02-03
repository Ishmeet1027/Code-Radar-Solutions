#include <stdio.h>
int main () {
    char a;
    scanf("%c",&a);
    if (isdigit(a)) {
        printf("Digit");
    } else if  (a=='a' || a=='e' || a=='i' || a=='O' || a=='u') {
        printf("Vowel");
    } else if (a=='!' || a=='@' || a=='#' || a=='$' || a=='%' || a=='^' || a=='&' || a=='*') {
        printf("Special Character");
    } else {
        printf("Consonant");
    }
    return 0;
}