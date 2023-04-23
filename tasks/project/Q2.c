#include <stdio.h>
void function();

int variable = 6;

int main(){

    int variable = 3;
    printf("Local Value: %d\n",variable);

    function();
}

void function(){

    printf("Global Value: %d",variable);
}