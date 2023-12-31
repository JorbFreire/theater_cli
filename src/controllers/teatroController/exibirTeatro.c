#include <stdio.h>
#include "teatroController.h"
#include "../assentoController/assentoController.h"
#include "../../utils/utils.h"

void printAssento(char *symbol, int indexColumn)
{
  if (indexColumn + 1 > 9)
    printf("|  %c ", *symbol);
  else
    printf("| %c ", *symbol);
}

void exibirTeatro(Teatro teatro)
{
  printf("Assentos reservados serão marcados com 'X'\n\n");
  printf("  0 ");
  for (int indexColumn = 0; indexColumn < teatro.linhasTamanho; indexColumn++)
    printf("| %d ", indexColumn + 1);
  printf("\n");

  for (int indexBorder = -1; indexBorder < teatro.linhasTamanho; indexBorder++)
  {
    printf("=====");
    if (indexBorder + 1 > 9)
    {
      printf("=");
    }
  }
  printf("\n");

  for (int indexRow = 0; indexRow < teatro.linhasTamanho; indexRow++)
  {
    printf("  %c ", numberToAlphabet(indexRow + 1));

    for (int indexColumn = 0; indexColumn < teatro.linhasTamanho; indexColumn++)
    {
      if (verificarDisponibilidade(teatro, indexRow, indexColumn))
        printAssento(" ", indexColumn);
      else
        printAssento("X", indexColumn);
    }

    printf("\n");

    for (int indexBorder = -1; indexBorder < teatro.linhasTamanho; indexBorder++)
    {
      printf("------");
    }
    printf("\n");
  }
}
