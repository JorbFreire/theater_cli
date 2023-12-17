#include <stdio.h>
#include "models/Assento.h"
#include "controllers/matrizController/matrizController.h"

int main()
{
  MatrizController matrizController = getMatrizController();
  printf("hello world\n");
  Assento **matriz = matrizController.inicializarMatriz(20, 20);
  matrizController.liberarMatriz(matriz, 20);
  return 1;
}
