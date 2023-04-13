#include <stdio.h>
#include <math.h>
#define pi 3.1415926535

double Factorial(int);

int main(){

    FILE *fptr;
    double bernoulli,k,j;
    int number_of_terms, i;

    bernoulli = 0;
    k = 0;
    
    fptr=fopen("Dracukeo.txt","w");
    
    printf("Ingrese el valor de k: ");
    do{
    scanf("%lf",&k);
    }while(k<0);
    int sentinel = (int)k;
    
    printf("Ingrese el numero de terminos: ");
    do{
        scanf("%d",&number_of_terms);
    }while(number_of_terms<1);
    
    for(i=0,j=1;i<number_of_terms,j<number_of_terms;i++,j++){

        bernoulli+=(((Factorial(k))/(pow(pi,2*k)*pow(2,2*k-1)))
        *((1/(pow(j,2*k)))));

        fprintf(fptr,"B%lfs = %lf",k);
    }

    printf("%lf",sentinel%2?bernoulli:-bernoulli);

}
 

double Factorial(int k){

    double factorial = 1;
    int j;

    for(j=1;j<=2*k;j++){

        factorial*=j;
    }
    return factorial;
}