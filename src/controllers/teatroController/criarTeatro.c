#include "teatroController.h"
#include "../matrizController/matrizController.h"

Teatro criarTeatro(int numLinhas, int numColunas)
{
  MatrizController matrizController = getMatrizController();
  Assento **newMatriz = matrizController.inicializarMatriz(numLinhas, numColunas);
  struct Teatro teatro = {
      .assentos = newMatriz,
      .linhasTamanho = numLinhas,
      .colunasTamanho = numColunas,
  };
  return teatro;
}
