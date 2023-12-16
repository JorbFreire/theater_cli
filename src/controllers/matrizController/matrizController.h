#ifndef MATRIZ_CONTROLLER_HEADER
#define MATRIZ_CONTROLLER_HEADER

#include "../../models/Assento.h"
struct MatrizController
{
  void (*inicializarMatriz)();
  void (*liberarMatriz)();
};
typedef MatrizController;

MatrizController getMatrizController();
Assento inicializarMatriz(int, int);
void liberarMatriz(Assento **, int);

#endif
