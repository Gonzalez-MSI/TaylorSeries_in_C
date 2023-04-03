#include <stdio.h>
#include <math.h>

int main(){

    float x,logarithm;
    int i,j,number_of_terms,power;

    do{
        printf("Ingrese el valor de x: ");
        scanf("%f",&x);
    }while(x<-1||x>1);

    do{
        printf("Ingrese el numero de terminos: ");
        scanf("%d",&number_of_terms);
    }while(number_of_terms<1);

    for(i=0,j=1,power=1,logarithm=0;i<number_of_terms,
    power<number_of_terms;i++,j++,power++){

        i%2?logarithm-=((pow(x,power))/j):logarithm+=((pow(x,power))/j);
        printf("[%i]_%f\n",i+1,logarithm);
    }
    printf("%f",logarithm);
}