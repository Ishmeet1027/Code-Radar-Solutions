#include <stdio.h>
int main () {
    char a;
    scanf("%c",&a);
    if (a=='a' || a=='e' || a=='i' || a=='O' || a=='u') {
        printf("Vowel");
    } else if (a=='!' || a=='@' || a=='#' || a=='$' || a=='%' || a=='^' || a=='&' || a=='*') {
        printf("Special Character");
    } else if (a>=97 && a<=122){
        printf("Consonant");
    } else {
        printf("Digit");
    }
    return 0;
}