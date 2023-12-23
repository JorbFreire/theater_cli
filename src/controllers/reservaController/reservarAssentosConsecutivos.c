#include "reservaController.h"

int reservarAssentosConsecutivos(Teatro teatro, int sequenceStart, int coluna, int assentosAmount, char *nome)
{
  ReservaController reservaController = getReservaController();
  int sequenceEnd = sequenceStart + assentosAmount - 1;
  int isSequenceAvailable = 1;

  // * no seat should be selected befere being certain that the full
  // * sequence will be possible
  for (int rowIndex = sequenceStart; rowIndex < sequenceEnd; rowIndex++)
    if (!verificarDisponibilidade(teatro, sequenceStart, coluna))
      isSequenceAvailable = 0;

  if (isSequenceAvailable)
  {
    for (int rowIndex = sequenceStart; rowIndex < sequenceEnd; rowIndex++)
      reservaController.reservarAssento(teatro, sequenceStart, coluna, nome);
    printf("Sequencia reservada com sucesso!");
    return 1;
  }
  printf("Sequencia indiponivel!");
  return 0;
}
