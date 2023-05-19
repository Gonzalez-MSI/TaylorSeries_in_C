#include <stdio.h>

float Power(float x, int n){

    if(n < 0){

        return Power(x,n+1)*(1/x);

    }else if(n != 0){

        return x * Power(x,n-1);

    }else{

        return 1;
    }
}

int main(){

    float x;
    int n;
    
    printf("x: ");
    scanf("%f",&x);

    printf("n: ");
    scanf("%d",&n);

    printf("(%f)^{%d} = %f",x,n,Power(x,n));   
}