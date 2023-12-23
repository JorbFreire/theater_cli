#include "reservaController.h"
#include <string.h>

int cancelarReserva(Teatro teatro, int linha, int coluna)
{
  --linha;
  --coluna;
  if (!verificarDisponibilidade(teatro, linha, coluna))
  {
    char(*targetNomePointer)[99] = &teatro.assentos[linha][coluna].nome;
    strncpy(*targetNomePointer, "", sizeof(*targetNomePointer) - 1);
    *targetNomePointer[sizeof(*targetNomePointer) - 1] = '\0';

    teatro.assentos[linha][coluna].reservado = 0;
    return 1;
  }
  return 0;
}
