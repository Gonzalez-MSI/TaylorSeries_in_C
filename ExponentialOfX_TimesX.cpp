#include <stdio.h>

int main() {
  
  int number_of_terms, i;
  float x, factorial, exponential;
  do{
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &number_of_terms);
  } while (number_of_terms<1);
  printf("Ingrese el valor de x: ");
  scanf("%f", &x);
  for(i=1,exponential=1,factorial=1;i<=number_of_terms;i++) {
    factorial*=(x/i);
    exponential+=factorial;
  }
  printf("x*exp(x) = %f\n",exponential);
}