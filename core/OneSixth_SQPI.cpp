#include <stdio.h>

int main(){
  
  float denominator,one_sixth_of_pi_squared,j;
  int nth_terms,i;
  
  do{
    printf("Ingrese el valor de terminos: ");
    scanf("%i", &nth_terms);
  }while(nth_terms<1);
  
  for(i=1, j=1; i<nth_terms; i++, j++){
    
  	one_sixth_of_pi_squared+=1/(j*j);
  }
  printf("PI^2/6 = %f\n", one_sixth_of_pi_squared);
}