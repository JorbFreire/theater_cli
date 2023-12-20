#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matrizController.h"

Assento **inicializarMatriz(int numLinhas, int numColunas)
{
  Assento **matriz = (Assento **)malloc(numLinhas * sizeof(Assento *));

  for (int rowIndex = 0; rowIndex < numLinhas; rowIndex++)
  {
    matriz[rowIndex] = (Assento *)malloc(numColunas * sizeof(Assento));

    for (int columnIndex = 0; columnIndex < numColunas; columnIndex++)
    {
      strcpy(matriz[rowIndex][columnIndex].nome, "\0");
      matriz[rowIndex][columnIndex].linha = rowIndex;
      matriz[rowIndex][columnIndex].coluna = columnIndex;
    }
  }
  return matriz;
}
