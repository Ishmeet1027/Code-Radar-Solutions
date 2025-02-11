#include <stdio.h>
int main () {
        int a;
        int isPrime = 1;
        scanf("%d",&a);
        if(a==1 || a==2){
            printf("Prime");
        }else{
            for(int i=2;i<a;i++){
                if(a%i==0){
                    isPrime = 0;
                }
            }
            if(isPrime==0){
                printf("Not Prime");
            }else{
                printf("Prime");
            }
        }
    return 0;
}