#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

float Power(float x, int n){

    if(n > 0){

        return x * Power(x, n - 1);

    }else if(n < 0){ 

        return Power(x, n + 1)/x;

    }else{

        return 1;
    }
}

int main(){

    int n;
    float x;
    char message[] = "Goodbye";

    printf("x = ");
        scanf("%f",&x);
    printf("n = ");
        scanf("%d",&n);

    printf("(%f)^{%d} = %f\n",x,n,Power(x,n));
    
    printf("Press any key to exit the program");
    getch();
    system("cls");
    printf("%s",message);
    Sleep(2);

    return 0;
}

