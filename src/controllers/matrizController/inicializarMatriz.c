#include "matrizController.h"
#include <stdio.h>
#include <stdlib.h>

Assento **inicializarMatriz(int numLinhas, int numColunas)
{
  Assento **matriz = (Assento **)malloc(numLinhas * sizeof(Assento *));

  for (int index = 0; index < numLinhas; ++index)
  {
    matriz[index] = (Assento *)malloc(numColunas * sizeof(Assento));

    // Allocate memory for the nome array in each Assento structure
    for (int i = 0; i < MAX_NAME_LENGTH; ++i)
    {
      matriz[index][i].nome = (char **)malloc(MAX_NAME_LENGTH * sizeof(char *));
      if (matriz[index][i].nome == NULL)
      {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
      }

      // Initialize each char pointer in the nome array to NULL
      for (int j = 0; j < MAX_NAME_LENGTH; ++j)
      {
        matriz[index][i].nome[j] = NULL;
      }
    }
  }
  return matriz;
}
