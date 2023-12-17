#include "repository.h"
#include "../controllers/teatroController/teatroController.h"

Teatro carregarEstado(char *nomeArquivo)
{
  TeatroController teatroController = getTeatroController();
  int numLinhas, numColunas;
  // todo: "numLinhas" and "numColunas" shall be read from file
  numLinhas = 20;
  numColunas = 20;
  Teatro teatro = teatroController.criarTeatro(numLinhas, numColunas);
  return teatro;
}
