#include <stdio.h>
#include <math.h>
#define pi 3.1415927

double Sinoidal_h(float,int);
double Cosinoidal_h(float,int);
double Factorial_Sin(int);
double Factorial_Cos(int);

int main(){
    
    float x;
    int number_of_terms;
    
    printf("Ingrese el valor de x: ");
    scanf("%f",&x);
    
    printf("Ingrese el numero de terminos: ");
    do{
        scanf("%d",&number_of_terms);
    }while(number_of_terms<1);
    
    printf("%f",Sinoidal_h(x,number_of_terms)/Cosinoidal_h(x,number_of_terms));
}

double Sinoidal_h(float x,int number_of_terms){

    int i;
    float sinh_x, power, j;
    sinh_x=0;

    for(i=0,j=0,power=0;i<number_of_terms,power<number_of_terms,
    j<=number_of_terms;i++,power++,j++){

        sinh_x+=((pow(((x*pi/180)),(2*power+1)))/(Factorial_Sin(j)));

    }
    return sinh_x;
}

double Factorial_Sin(int j){

    int k;
    double factorial=1;

    for(k=1;k<=2*j+1;k++){
        
        factorial*=k;
    }
    return factorial;
}


double Cosinoidal_h(float x,int number_of_terms){

    int i;
    float cosh_x, power, j;
    cosh_x=0;

    for(i=0,j=0,power=0;i<number_of_terms,power<number_of_terms,
    j<=number_of_terms;i++,power++,j++){

        cosh_x+=((pow(((x*pi/180)),(2*power)))/(Factorial_Cos(j)));

    }
    return cosh_x;
}

double Factorial_Cos(int j){

    int k;
    double factorial=1;

    for(k=1;k<=2*j;k++){
        
        factorial*=k;
    }
    return factorial;
}