#include <stdio.h>
#include <math.h>
#define pi 3.1415927 

int main(){

    double x,j,tangent_1,tangent_2,pi_medium,result;
    int number_of_terms,i;

    pi_medium = pi/2;
    
    printf("Ingrese el valor de x: ");
    scanf("%lf",&x);
    

    printf("Ingrese el numero de terminos: ");
    do{
        scanf("%d",&number_of_terms);
    }while(number_of_terms<1);

    for(i=0,j=0;i<number_of_terms,j<number_of_terms;i++,j++){

        i%2?tangent_1-=(pow(x,2*j+1)/(2*j+1)):tangent_1+=(pow(x,2*j+1)/(2*j+1));
    }

    for(i=0,j=0;i<number_of_terms,j<number_of_terms;i++,j++){

        x>=1?pi_medium=pi_medium:pi_medium=-pi_medium;
        tangent_2=pi_medium+(i%2?tangent_1-=(1/((2*j+1)*pow(x,2*j+1))):tangent_1+=(1/((2*j+1)*pow(x,2*j+1))));
    }  

    result=tangent_1+tangent_2; 

    printf("%lf",result);   

}