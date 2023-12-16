#include <stdio.h>
#include "matrizController.h"

void liberarMatriz(Assento **matriz, int linhas)
{
  for (int index = 0; index < linhas; ++index)
  {
    free(matriz[index]);
  }
  free(matriz);
}
