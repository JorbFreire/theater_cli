#include "reservaController.h"
#include "../../utils/utils.h"

// * There is no need to return "Assento **", so it just returns void
// * It will just put more responsability into "main"
void reservarAssentosConsecutivosPeloSistema(Teatro teatro, int assentosAmount, char *nome)
{
  ReservaController reservaController = getReservaController();
  int currentSequence = 0;
  int sequenceStart = 0;
  int sequenceEnd = 0;

  printf("Buscando sequencia com %d ou mais assentos disponiveis na mesma linha\n", assentosAmount);

  for (int rowIndex = 0; rowIndex < teatro.linhasTamanho; ++rowIndex)
  {
    for (int columnIndex = 0; columnIndex < teatro.colunasTamanho; ++columnIndex)
    {
      if (currentSequence >= assentosAmount)
      {
        for (int sequenceIndex = sequenceStart; sequenceIndex <= sequenceEnd; ++sequenceIndex)
          reservaController.reservarAssento(teatro, rowIndex + 1, sequenceIndex + 1, nome);
        printf(
            "Assentos reservados de %c-%d até %c-%d para '%s'\n",
            numberToAlphabet(rowIndex),
            sequenceStart,
            numberToAlphabet(rowIndex),
            sequenceEnd,
            nome);
        return;
      }
      if (verificarDisponibilidade(teatro, rowIndex, columnIndex))
      {
        if (sequenceStart > 0)
          sequenceStart = columnIndex + 1;
        else
          sequenceEnd = columnIndex + 1;
        currentSequence++;
      }
      else
      {
        sequenceStart = 0;
        sequenceEnd = 0;
        currentSequence = 0;
      }
    }
    sequenceStart = 0;
    sequenceEnd = 0;
    currentSequence = 0;
  }
  printf("Nenhuma sequencia neste tamanho disponivel\n");
}
