#include "reservaController.h"
#include <string.h>

int reservarAssento(Teatro teatro, int linha, int coluna, char *nome)
{
  if (teatro.assentos[linha][coluna].reservado == 0)
  {
    char(*targetNomePointer)[99] = &teatro.assentos[linha][coluna].nome;
    strncpy(*targetNomePointer, nome, sizeof(*targetNomePointer) - 1);
    *targetNomePointer[sizeof(*targetNomePointer) - 1] = '\0';

    teatro.assentos[linha][coluna].reservado = 1;
    return 1;
  }
  return 0;
}
