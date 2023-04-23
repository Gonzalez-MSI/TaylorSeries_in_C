#include <stdio.h>
#define STRING "%s\n"
#define HELLO "Hello World!"

int main(){

    // octal & decimal values
    // 8^n * index

    int variable = 052;
    printf("Octal2Decimal:  0%o = %d\n",variable,variable);

    // using a macro as string format specifier
    printf(STRING,HELLO);

    // hexadecimal & decimal values
    int hexadecimal = 0x43FF;    
    printf("Hexadecimal2Decimal:    0x%x = %d",hexadecimal,hexadecimal);
}