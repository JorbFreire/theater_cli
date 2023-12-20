#include "utils.h"
#include "../controllers/assentoController/assentoController.h"

void exibirInformacoes(Teatro teatro)
{
  int assetosAmount = teatro.linhasTamanho * teatro.colunasTamanho;
  int reservadosAmount = 0;

  for (int rowIndex = 0; rowIndex < teatro.linhasTamanho; rowIndex++)
    for (int columnIndex = 0; columnIndex < teatro.colunasTamanho; columnIndex++)
      if (verificarDisponibilidade(teatro, rowIndex, columnIndex))
        reservadosAmount++;

  printf("    Informações do teatro    \n");
  printf("-----------------------------\n");
  printf("Numero de linhas: %d\n", teatro.linhasTamanho);
  printf("Numero de colunas: %d\n", teatro.colunasTamanho);
  printf("Numero total de assentos: %d\n", assetosAmount);
  printf("\n\n\n");
}
