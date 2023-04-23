#include <stdio.h>
#include <math.h>

#define pi 3.1415927
double Factorial(int);
double Factorial_Squared(int);

int main(){

    FILE *fptr;
    double x, asinh_x, j;
    int number_of_terms, i;

    asinh_x = 0;

    fptr=fopen("asinh_x.txt","w");
    printf("Ingrese el valor de x: ");
    scanf("%lf",&x);

    printf("Ingrese el numero de terminos: ");
    scanf("%d",&number_of_terms);

    for(i=0,j=0;i<number_of_terms,
    j<=number_of_terms;i++,j++){

        i%2?asinh_x-=((Factorial(j))*(pow(x*pi/180,2*j+1)))/
        ((pow(4,j))*(pow(Factorial_Squared(j),2))*(2*j+1)):
        asinh_x+=((Factorial(j))*(pow(x*pi/180,2*j+1)))/
        ((pow(4,j))*(pow(Factorial_Squared(j),2))*(2*j+1));


        fprintf(fptr,"%d       %lf\n",i,asinh_x);
    }
    
    fclose(fptr);
    printf("asinh(x) = %lf",asinh_x);
}

double Factorial(int j){

    int k;
    double factorial=1;

    for(k=1;k<=2*j;k++){
        
        factorial*=k;
    }
    return factorial;
}

double Factorial_Squared(int j){

    int k;
    double factorial=1;

    for(k=1;k<=2*j;k++){
        
        factorial*=k;
    }
    return factorial;
}
