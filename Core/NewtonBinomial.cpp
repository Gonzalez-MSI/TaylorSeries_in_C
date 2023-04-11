#include <stdio.h>
#include <math.h>

double Factorial(int);
double Combination(int,int);

int main(){

    FILE *fptr; 
    float x,binomial=0;
    int alpha,number_of_terms,power,i;
    
    fptr=fopen("Newton.txt","w");

    do{
        printf("Ingrese el valor de x: ");
        scanf("%f",&x); 
    }while(x<0 || x>1);

    do{
        printf("Ingrese el valor de alpha: ");
        scanf("%i",&alpha); 
    }while(alpha<0);

    do{
        printf("Ingrese el numero de terminos: ");
        scanf("%i",&number_of_terms);
    }while(number_of_terms<1);

    for(i=0,power=1;i<=number_of_terms,power<=number_of_terms;i++,
    power++){

        binomial+=((pow(x,power)*Combination(alpha,i)));
        fprintf(fptr,"Iteration:%i  Binomial:%f     Factorial(alpha):%f    Factorial(i):%f\n",
        i+1,binomial,Factorial(alpha),Factorial(i));
    }
    fclose(fptr);
    printf("%f",binomial);
}

double Factorial(int alpha){

    int j;
    double factorial=1;

    for(j=1;j<=alpha;j++){
        
        factorial*=j;
    }

    return factorial;
}

double Combination(int alpha,int i){

    return (Factorial(alpha)/(Factorial(i)*Factorial(alpha-i)));
}

