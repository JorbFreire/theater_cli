#include <stdio.h>
#include "controllers/matrizController/matrizController.h"

int main()
{
  MatrizController matrizController = getMatrizController();
  printf("hello world\n");
  matrizController.liberarMatriz();
  return 1;
}
