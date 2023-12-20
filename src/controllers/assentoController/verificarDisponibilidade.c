#include "assentoController.h"

int verificarDisponibilidade(Teatro teatro, int linha, int coluna)
{
  if (teatro.assentos[linha][coluna].reservado == 1)
    return 1;
  else
    return 0;
}
