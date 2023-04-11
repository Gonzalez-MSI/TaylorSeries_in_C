#include <stdio.h>
#include <math.h>

//programa que calcule a^x
int main (void)
{
    //variavles para calcular el ln a
    float x, logarithm, j, a ;
    int i, number_of_terms, power, n_terms;
    
    do
    {
        printf("Ingrese el valor de x: ");
        scanf("%f", &x);
    }while(x<0);
    
    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    
    do
    {
        printf("Ingrese el numero de terminos: ");
        scanf("%d", &n_terms);
    }while(n_terms<1);
    
    number_of_terms= n_terms;
    //calculo del ln a
    for(i=0, j=0, power=0, logarithm=0; i<number_of_terms, power<number_of_terms; i++, j++, power++)
    {
        logarithm+=(1/(2*j+1))*((pow(((a-1)/(a+1)),((2*power)+1))));
    }
    
    printf("\n\nln=%f", 2*logarithm);
  
    //calculo del factorial
    
    //variables para el calculo factorial
    int k, l;//k es del factorial
    float den=1; 
    
    l=n_terms;
    //variables para en numerador (x*ln(a))
    float mult;
    float result=1;
    int c;
    for(c=1, l=1; c<=n_terms, l<=n_terms; c++, l++)
    {
         //calculo del factorial     
         for(k=1; k<=l; k++)
         {
             den*=k;
         }
         mult=(2*logarithm)*x;
         //calculo de (x*ln(a))^l/factorial
         result+=((pow(mult,l))/den);
         printf("\n[%d]_%f", c, result);
    }      
     
    printf("\n\n%f", result);                     
    return 0;
}