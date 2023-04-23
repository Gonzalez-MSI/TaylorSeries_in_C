#include <stdio.h>

int Factorial(int);
int Combination(int,int);

int main(){

    int alpha,i;

    printf("Enter: ");
    scanf("%d",&alpha);

    printf("Enter: ");
    scanf("%d",&i);

    printf("\nCombinatory Result = %d",Combination(alpha,i));
}
int Factorial(int alpha){

    int j;
    int factorial=1;

    for(j=1;j<=alpha;j++){
        
        factorial*=j;
    }
        
    
    return factorial;
}

int Combination(int alpha,int i){

    return (Factorial(alpha)/(Factorial(i)*Factorial(alpha-i)));
}