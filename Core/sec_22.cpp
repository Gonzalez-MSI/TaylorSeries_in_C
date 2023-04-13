#include <stdio.h>
#include <math.h>
#define pi 3.1415927

double Cosinoidal(float,int);
double Factorial_Cos(int);

int main(){

    float x;
    int number_of_terms;

    printf("Ingrese el valor de x: ");
    scanf("%f",&x);

    printf("Ingrese el numero de terminos: ");
    scanf("%d",&number_of_terms);

    printf("%f",1/Cosinoidal(x,number_of_terms));


}

double Cosinoidal(float x,int number_of_terms){

    int i;
    float cos_x, power, j;
    cos_x=0;

    for(i=0,j=0,power=0;i<number_of_terms,power<number_of_terms,
    j<=number_of_terms;i++,power++,j++){

        i%2?cos_x-=((pow(((x*pi/180)),(2*power)))/(Factorial_Cos(j))):
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