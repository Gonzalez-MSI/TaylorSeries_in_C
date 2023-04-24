#include <stdio.h>

int main(){

    int i = 5;
    int variable = sizeof(++i);

    printf("%d, %d",i, variable);

    return 0;
}