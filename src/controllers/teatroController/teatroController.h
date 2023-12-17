#ifndef TEATRO_CONTROLLER_HEADER
#define TEATRO_CONTROLLER_HEADER

#include "../../models/Teatro.h"
typedef struct
{
  Teatro (*criarTeatro)(int numLinhas, int numColunas);
  void (*exibirTeatro)(Teatro teatro);
} TeatroController;

TeatroController getTeatroController();
Teatro criarTeatro(int numLinhas, int numColunas);
void exibirTeatro(Teatro teatro);

#endif
