#ifndef MATRIZ_CONTROLLER_HEADER
#define MATRIZ_CONTROLLER_HEADER

#include "../../models/Assento.h"
typedef struct
{
  void (*inicializarMatriz)();
  void (*liberarMatriz)();
} MatrizController;

MatrizController getMatrizController();
Assento **inicializarMatriz(int, int);
void liberarMatriz(Assento **, int);

#endif
