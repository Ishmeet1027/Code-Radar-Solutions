#include <stdio.h>
int main () {
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    (c=='+')?printf("%f",a+b):(c=='-')? printf("%f",a-b):(c=='*')? printf("%f",a*b):printf("%f",a/b);
    return 0;
}