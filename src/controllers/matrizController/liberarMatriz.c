#include <stdio.h>
#include <stdlib.h>
#include "matrizController.h"

void liberarMatriz(Assento **matriz, int linhas)
{
  for (int rowIndex = 0; rowIndex < linhas; rowIndex++)
  {
    // Free the entire row of Assento structures
    free(matriz[rowIndex]);
  }

  // Free the array of pointers to rows
  free(matriz);
}
