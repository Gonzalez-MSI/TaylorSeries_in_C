#include <stdio.h>
#include <math.h>
#define pi 3.1415926535

double Factorial(int);

int main(){

    FILE *fptr;
    double euler,k,j;
    int number_of_terms, i;

    euler = 0;
    k = 0;
    
    fptr=fopen("EulerNumber.txt","w");
    
    printf("Ingrese el valor de k: ");
    do{
    scanf("%lf",&k);
    }while(k<0);

    printf("Ingrese el numero de terminos: ");
    do{
        scanf("%d",&number_of_terms);
    }while(number_of_terms<1);
    
    for(i=0,j=0;i<number_of_terms,j<number_of_terms;i++,j++){

        euler+=(((pow(2,2*k+2)*Factorial(k))/(pow(pi,2*k+1)))
        *(i%2?(-1/(pow(2*j+1,2*k+1))):(1/(pow(2*j+1,2*k+1)))));

        fprintf(fptr,"E%lfs = %lf",k,euler);
    }

    printf("E%lf = %lf",k,euler);

}
 

double Factorial(int k){

    double factorial = 1;
    int j;

    for(j=1;j<=2*k;j++){

        factorial*=j;
    }
    return factorial;
}