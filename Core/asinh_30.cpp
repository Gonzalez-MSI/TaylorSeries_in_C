#include <stdio.h>
#include <math.h>
#define pi 3.1415927
double Factorial(int);

int main(){

    FILE *fptr;
    float x, asinh_x, power,j;
    int number_of_terms,i;

    fptr=fopen("asinh_x.txt","w");
    printf("Ingrese el valor de x: ");
    scanf("%f",&x);

    printf("Ingrese el numero de terminos: ");
    scanf("%d",&number_of_terms);

    for(i=0,j=0,power=0;i<number_of_terms,power<number_of_terms,
    j<=number_of_terms;i++,power++,j++){

        i%2?asinh_x+=((Factorial(j))*(pow(x,2*power+1))/((pow(4,power))*
        (pow(Factorial(j),2)*(2*j+1)))):0;

        fprintf(fptr,"%d,       asinh(x)=%f\n",i,asinh_x);
    }
    
    fclose(fptr);
    printf("asinh(x) = %f",asinh_x);
}

double Factorial(int j){

    int k;
    double factorial=1;

    for(k=1;k<=2*j+1;k++){
        
        factorial*=k;
    }
    return factorial;
}