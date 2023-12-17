#include "repository.h"

int salvarEstado(Teatro teatro, char *nomeArquivo)
{
  FILE *file = fopen(nomeArquivo, "w");
  if (file == NULL)
  {
    fprintf(stderr, "Error opening file for writing.\n");
    return 1;
  }

  fprintf(file, "LinhasTamanho: %d\n", teatro.linhasTamanho);
  fprintf(file, "ColunasTamanho: %d\n", teatro.colunasTamanho);

  // Write Assento data for each seat
  for (int rowIndex = 0; rowIndex < teatro.linhasTamanho; ++rowIndex)
  {
    for (int columnIndex = 0; columnIndex < teatro.colunasTamanho; ++columnIndex)
    {
      fprintf(file, "Reservado: %d\n", teatro.assentos[rowIndex][columnIndex].reservado);
      fprintf(file, "Linha: %d\n", teatro.assentos[rowIndex][columnIndex].linha);
      fprintf(file, "Coluna: %d\n", teatro.assentos[rowIndex][columnIndex].coluna);
      fprintf(file, "Nome: %s\n", teatro.assentos[rowIndex][columnIndex].nome);
    }
  }

  fclose(file);
  return 0;
}
