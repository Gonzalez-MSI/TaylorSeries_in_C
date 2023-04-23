#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define INIT_RANDOM srand(time(NULL))

int main(){
    
    int number,i;
    int v1[20];

    INIT_RANDOM;
    printf("Ingrese un numero: ");
    scanf("%d",&number);
    for(i=0;i<20;i++){

        v1[i] = 1+rand()%(number+1-1);
        printf("%d\n",v1[i]);
    }

    return 0;
}