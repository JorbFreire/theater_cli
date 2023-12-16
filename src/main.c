#include <stdio.h>
#include "models/Assento.h"
#include "controllers/matrizController/matrizController.h"

int main()
{
  MatrizController matrizController = getMatrizController();
  printf("hello world\n");
  Assento **matriz = matrizController.inicializarMatriz();
  return 1;
}
