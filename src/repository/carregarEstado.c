#include "repository.h"
#include "../controllers/teatroController/teatroController.h"

Teatro carregarEstado(char *nomeArquivo)
{
  TeatroController teatroController = getTeatroController();
  int numLinhas, numColunas;
  FILE *file = fopen(nomeArquivo, "r");
  // ?? if (file == NULL) ??

  fscanf(file, "LinhasTamanho: %d\n", &numLinhas);
  fscanf(file, "ColunasTamanho: %d\n", &numColunas);
  Teatro teatro = teatroController.criarTeatro(numLinhas, numColunas);

  // Read Assento data for each seat
  for (int rowIndex = 0; rowIndex < teatro.linhasTamanho; ++rowIndex)
  {
    for (int columnIndex = 0; columnIndex < teatro.colunasTamanho; ++columnIndex)
    {
      fscanf(file, "Reservado: %d\n", &teatro.assentos[rowIndex][columnIndex].reservado);
      fscanf(file, "Linha: %d\n", &teatro.assentos[rowIndex][columnIndex].linha);
      fscanf(file, "Coluna: %d\n", &teatro.assentos[rowIndex][columnIndex].coluna);
      fscanf(file, "Nome: %s\n", teatro.assentos[rowIndex][columnIndex].nome);
    }
  }

  fclose(file);
  return teatro;
}
