#include "matrizController.h"

MatrizController getMatrizController()
{
  MatrizController matrizController;
  matrizController.inicializarMatriz = inicializarMatriz;
  matrizController.liberarMatriz = liberarMatriz;
  return matrizController;
}
