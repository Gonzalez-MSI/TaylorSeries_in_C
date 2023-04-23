#include <stdio.h>
#include <math.h>

double Factorial(int);

int main(){

  FILE *fptr;
  float x,exponential;
  int number_of_terms,power,i,j;

  fptr=fopen("ExponentialOfX_TimesX.txt","w");
  printf("Ingrese el valor de x: ");
  scanf("%f",&x);
  printf("Ingrese el numero de terminos: ");
  do{
      scanf("%i",&number_of_terms);

  }while(number_of_terms<1);

  for(i=1,j=1,power=1;i<number_of_terms,j<number_of_terms,power<number_of_terms;
  i++,j++,power++){

    exponential+=(((j)*(pow(x,power)))/(Factorial(j))); 
    fprintf(fptr,"%d     %.4f\n",i,exponential);
  }
  fclose(fptr);
  printf("xe^x = %lf",exponential); 
}


double Factorial(int j){

    int k;
    double factorial=1;

    for(k=1;k<=j;k++){
        
        factorial*=k;
    }
    return factorial;
}