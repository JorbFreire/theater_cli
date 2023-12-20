#include "reservaController.h"

int cancelarReservas(Teatro teatro, char *nome)
{
  int cancelationAmount = 0;
  for (int rowIndex = 0; rowIndex < teatro.linhasTamanho; rowIndex++)
    for (int columnIndex = 0; columnIndex < teatro.colunasTamanho; columnIndex++)
      if (teatro.assentos[rowIndex][columnIndex].nome == nome)
      {
        cancelarReserva(teatro, rowIndex, columnIndex);
        cancelationAmount++;
      }
  return cancelationAmount;
}
