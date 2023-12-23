#include "reservaController.h"

int cancelarTodasAsReservas(Teatro teatro)
{
  int cancelationAmount = 0;
  for (int rowIndex = 0; rowIndex < teatro.linhasTamanho; rowIndex++)
    for (int columnIndex = 0; columnIndex < teatro.colunasTamanho; columnIndex++)
      if (!verificarDisponibilidade(teatro, rowIndex, columnIndex))
      {
        cancelarReserva(teatro, rowIndex, columnIndex);
        cancelationAmount++;
      }
  return cancelationAmount;
}
