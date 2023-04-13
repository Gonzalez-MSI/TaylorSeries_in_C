#include <stdio.h>
#include <math.h>
#define pi 3.1415927

double Sinoidal(float,int);
double Cosinoidal(float,int);
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
    
    printf("%f",Sinoidal(x,number_of_terms)/Cosinoidal(x,number_of_terms));
}

double Sinoidal(float x,int number_of_terms){

    int i;
    float sin_x, power, j;
    sin_x=0;

    for(i=0,j=0,power=0;i<number_of_terms,power<number_of_terms,
    j<=number_of_terms;i++,power++,j++){

        sin_x+=((pow(((x*pi/180)),(2*power+1)))/(Factorial_Sin(j)));

    }
    return sin_x;
}

double Factorial_Sin(int j){

    int k;
    double factorial=1;

    for(k=1;k<=2*j+1;k++){
        
        factorial*=k;
    }
    return factorial;
}


double Cosinoidal(float x,int number_of_terms){

    int i;
    float cos_x, power, j;
    cos_x=0;

    for(i=0,j=0,power=0;i<number_of_terms,power<number_of_terms,
    j<=number_of_terms;i++,power++,j++){

        cos_x+=((pow(((x*pi/180)),(2*power)))/(Factorial_Cos(j)));

    }
    return cos_x;
}

double Factorial_Cos(int j){

    int k;
    double factorial=1;

    for(k=1;k<=2*j;k++){
        
        factorial*=k;
    }
    return factorial;
}