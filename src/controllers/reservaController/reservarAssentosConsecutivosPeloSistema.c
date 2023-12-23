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

  for (int columnIndex = 0; columnIndex < teatro.colunasTamanho; ++columnIndex)
  {
    for (int rowIndex = 0; rowIndex < teatro.linhasTamanho; ++rowIndex)
    {
      if (currentSequence >= assentosAmount)
      {
        for (int sequenceIndex = sequenceStart; sequenceIndex <= sequenceEnd; ++sequenceIndex)
          reservaController.reservarAssento(teatro, sequenceIndex, columnIndex, nome);
        printf(
            "Assentos reservados de %c-%d até %c-%d para '%s'\n",
            numberToAlphabet(sequenceStart),
            columnIndex,
            numberToAlphabet(sequenceEnd),
            columnIndex,
            nome);
        return;
      }
      if (verificarDisponibilidade(teatro, rowIndex, columnIndex))
      {
        printf("Disponivel: %d-%d", rowIndex, columnIndex);
        if (sequenceStart > 0)
          sequenceStart = rowIndex + 1;
        else
          sequenceEnd = rowIndex + 1;
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
