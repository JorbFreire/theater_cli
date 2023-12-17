#ifndef MATRIZ_CONTROLLER_HEADER
#define MATRIZ_CONTROLLER_HEADER

#include "../../models/Assento.h"
typedef struct
{
  Assento **(*inicializarMatriz)(int numLinhas, int numColunas);
  void (*liberarMatriz)(Assento **matriz, int numLinhas);
} MatrizController;

MatrizController getMatrizController();
Assento **inicializarMatriz(int numLinhas, int numColunas);
void liberarMatriz(Assento **matriz, int numLinhas);

#endif
