#include <stdio.h>

int main(){

    FILE *fptr;
    int alpha, number_of_terms, i;
    double x, newton = 1, factorial = 1;

    fptr=fopen("Newton.txt","w");
    printf("Ingrese el valor de x: ");  
    do{
        scanf("%lf",&x);
    }while(x<0 || x>1);

    printf("Ingrese el valor de a: ");
    do{
        scanf("%d",&alpha);
    }while(alpha<0);       

    printf("Ingrese el valor de n: ");
    do{
        scanf("%d",&number_of_terms);
    }while(number_of_terms<1);
    
    // Este es el binomio de newton (la combinatoria)
    for(i=1; i<=number_of_terms; i++){
        
        factorial=factorial*(alpha-i+1)*(x/i);
        newton+=factorial;
        fprintf(fptr,"%d    %f\n",i,newton);
    }
    fclose(fptr);

    printf("(1+x)^a = %f",newton);
}


