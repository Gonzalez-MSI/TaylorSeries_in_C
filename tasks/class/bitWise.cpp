#include <stdio.h>
#define	BIT(n)			          (1<<(n))
#define	BIT_GET(x,n)		      ((x) & BIT(n))
#define	BIT_SET(x,n)		      ((x) |= BIT(n))
#define	BIT_CLEAR(x,n)	      ((x) &= ~BIT(n))
#define	BIT_TOGGLE(x,n)	      ((x) ^= BIT(n))
#define	BIT_WRITE(x,n,v)	    ((v)?BIT_SET(x,n):BIT_CLEAR(x,n))
#define	ES_PAR(x)		          (!BIT_GET(x,0))



int main(void) 
{
  int x, nb, nbmax, i; 
  printf("Ingrese el valor de x: ");
  scanf("%d", &x);
  nbmax = 8*sizeof(x);
  printf("Tamanio: %d\n", nbmax);
  do{
    printf("Ingrese el bit: ");
    scanf("%d", &nb);
  }while(nb<0||nb>=nbmax);

  printf("%d = ", x);

  for(i=nbmax-1; i>-1; i--){

    printf("%d", BIT_GET(x, i)?1:0);
  }

  printf("\n%d\n", BIT_SET(x, nb));
  printf("%d = ", x); 

  for(i=nbmax-1; i>-1; i--){

    printf("%d", BIT_GET(x, i)?1:0);

  }
      printf("\n");
  printf("%d\n", BIT_CLEAR(x, nb));
  printf("%d = ", x);
  for(i=nbmax-1; i>-1; i--)
    printf("%d", BIT_GET(x, i)?1:0);
  printf("\n");
  printf("%d\n", BIT_TOGGLE(x, nb));
  printf("%d = ", x);
  for(i=nbmax-1; i>-1; i--)
    printf("%d", BIT_GET(x, i)?1:0);
  printf("\n",2+2);
  return 0;
}


