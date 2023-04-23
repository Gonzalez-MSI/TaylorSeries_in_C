#include <stdio.h>

int main(){

    int factorial,x,i;
    factorial=1;
    
    scanf("%i",&x);

    for(i=1;i<=x;i++){

        factorial*=i;
    }
    printf("%i",factorial);
}