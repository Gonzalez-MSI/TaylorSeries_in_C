#include <stdio.h>
#define UPPER_LIMIT 10000

int main(){
  
  float denominator,one_sixth_of_pi_squared,j;
  int nth_terms,i;
  
  do{
    printf("Ingrese el valor de terminos: ");
    scanf("%i", &nth_terms);
  }while(nth_terms<0 || nth_terms>UPPER_LIMIT);
  
  for(i=1, j=1; i<nth_terms; i++, j++){
    
  	one_sixth_of_pi_squared+=1/(j*j);
  }
  printf("PI^2/6 = %f\n", one_sixth_of_pi_squared);
}