#include "matrizController.h"
#include <stdio.h>

Assento **inicializarMatriz(int numLinhas, int numColunas)
{
  Assento **matriz = (int **)malloc(numLinhas * sizeof(Assento *));

  for (int index = 0; index < numLinhas; ++index)
  {
    matriz[index] = (int *)malloc(numColunas * sizeof(Assento));
  }
  return matriz;
}
