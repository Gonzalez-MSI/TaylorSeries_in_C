#include <stdio.h>
#define STRING "%s\n"
#define HELLO "Hello World!"

int main(){

    // octal & decimal values
    // 8^n * index

    int variable = 052;
    printf("Octal2Decimal:  0%o = %d\n",variable,variable);

    printf(STRING,HELLO);

}