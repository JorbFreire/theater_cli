#include "reservaController.h"
#include <string.h>

int cancelarReserva(Teatro teatro, int linha, int coluna)
{
  if (teatro.assentos[linha][coluna].reservado == 1)
  {
    char(*targetNomePointer)[99] = &teatro.assentos[linha][coluna].nome;
    strncpy(*targetNomePointer, "", sizeof(*targetNomePointer) - 1);
    *targetNomePointer[sizeof(*targetNomePointer) - 1] = '\0';

    teatro.assentos[linha][coluna].reservado = 0;
    return 1;
  }
  return 0;
}
