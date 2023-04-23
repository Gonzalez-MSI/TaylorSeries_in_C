#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define NC 50

#define BIT(n) (1 << (n))
#define BIT_TOGGLE(x, n) ((x) ^= BIT(n))

int main(void)
{
  char cadena[NC], p, v;
  int i, nc, b, c, nb;
  srand(time(NULL));
  printf("Ingrese la cadena: ");
  i = 0;
  do
  {
    cadena[i++] = getchar();
    if (i > NC)
      break;
  } while (cadena[i - 1] != 10);
  nc = i;
  cadena[i] = '\0';
  printf("%s\n", cadena);
  printf("#{msg} = %d\n", nc);
  for (i = 0, p = 0; i < nc; i++)
    p ^= cadena[i];
  printf("Paridad: %d (%c)\n", p, p);
  for (i = 0, v = p; i < nc; i++)
    v ^= cadena[i];
  printf("Verificar: %d (%c)\n", v, v);
  b = rand() % 8;
  c = rand() % nc;
  printf("Bit: %d\n", b);
  printf("Caracter: %d\n", c);
  BIT_TOGGLE(cadena[c], b);
  printf("%s\n", cadena);
  for (i = 0, v = p; i < nc; i++)
    v ^= cadena[i];
  printf("Verificar: %d (%c)\n", v, v);
  nb = (int)log2(v);
  printf("Bit: %d\n", nb);
  BIT_TOGGLE(cadena[c], nb);
  printf("%s\n", cadena);
  return 0;
}