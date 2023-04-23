#include <stdio.h>
#include <math.h>

double Alpha_Logarithm(int,double);
double Factorial(int);

int main(){

    FILE *fptr;
    float x,exponential_a,logarithm,alpha,j;
    int i,number_of_terms;

    fptr=fopen("exponential_a_15.txt","w");
    printf("Ingrese el valor de alpha: ");
    do{
        scanf("%f",&alpha);

    }while(alpha<1);

    printf("Ingrese el valor de x: ");
    do{
        scanf("%f",&x); 
    }while(x<0);

    do{
        printf("Ingrese el numero de terminos: ");
        scanf("%d",&number_of_terms);
    }while(number_of_terms<1);


    for(i=0,j=0;i<number_of_terms,j<number_of_terms;i++,j++){

        exponential_a+=((pow(x*Alpha_Logarithm(number_of_terms,alpha),j))
        /(Factorial(j)));
        fprintf(fptr,"%d    %.4f\n",i,exponential_a);
    }
    fclose(fptr);
    printf("%f",exponential_a);
}

double Alpha_Logarithm(int number_of_terms, double alpha){

    int i;
    double logarithm,j;

    for(i=0,j=0,logarithm=0;i<number_of_terms;
    i++,j++){

        logarithm+=(1/(2*j+1))*((pow(((alpha-1)/(alpha+1)),((2*j)+1))));
        
    }
    logarithm = logarithm*2;
    return logarithm;
}

double Factorial(int j){

    int k;
    double factorial=1;

    for(k=1;k<=j;k++){
        
        factorial*=k;
    }
    return factorial;
}