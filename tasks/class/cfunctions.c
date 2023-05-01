#include <stdio.h>
#define N 50
#define separator puts("-----------------------")
#define MATRIX_A puts("Matrix A")

int main(){
    
    int n, i, j;
    int Matrix[N][N];

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    
        for(j=0;j<n;j++){

            printf("a[%d][%d] = ", i+1, j+1);
            scanf("%d",&Matrix[i][j]);
        }
    }

    printf("\n");
    
    separator;
    MATRIX_A;   
    separator;
    for(i=0;i<n;i++){
    
        for(j=0;j<n;j++){

            printf("%d\t",Matrix[i][j]);
        }
        printf("\n");
    }
    separator;


    return 0;
}