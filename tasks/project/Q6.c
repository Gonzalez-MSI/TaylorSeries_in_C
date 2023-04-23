#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define AREA(x,y) x*y
#define SEPARATOR puts("-----------------")
#define CREATE_NOTEPAD FILE *fptr
#define NOTEPAD_NAME fptr=fopen("Q6.txt","w")
#define CLOSE_NOTEPAD fclose(fptr)

int main(){

    CREATE_NOTEPAD;
    NOTEPAD_NAME;

    int x = 15;
    int y = 10;
    printf("area:   %d\n",AREA(x,y));
    
    srand(time(NULL));
    for(int i=0;i<20;i++){

        i%2?printf("%d\n",rand()%11):printf("null\n");
        fprintf(fptr,"%d\n",i);
    }
    CLOSE_NOTEPAD;

    SEPARATOR;
    puts("Binary operators");
    SEPARATOR;

    // shift right operator (>>)
    SEPARATOR;
    puts("Shift right");
    SEPARATOR;
    int number = 100000;
    printf("number = %d\n",number);
    for(int j=0;j<18;j++){

        printf("%d\n",number >> j);
    }
    
    // shift right operator (<<)
    SEPARATOR;
    puts("Shift left");
    SEPARATOR;
    number = 1;
    printf("number = %d\n",number);
    for(int j=0;j<18;j++){

        printf("%d\n",number << j);
    }
}