#include <stdio.h>
#include <math.h>
#define pi 3.1415927

int main(){

    FILE *fptr;
    float x, atanh_x, power, j;
    int number_of_terms,i;

    fptr=fopen("atanh_x.txt","w");
    printf("Ingrese el valor de x: ");
    scanf("%f",&x);

    printf("Ingrese el numero de terminos: ");
    scanf("%d",&number_of_terms);

    for(i=0,power=0;i<number_of_terms,power<number_of_terms;i++,power++){

        atanh_x+=((pow(((x*pi/180)),(2*power+1)))/(2*i+1));

        fprintf(fptr,"%d    %f\n",i,atanh_x);
    }
    
    fclose(fptr);
    printf("atanh(x) = %f",atanh_x);
}
