#include "assentoController.h"
#include "../../utils/utils.h"

void consultarAssentosConsecutivos(Teatro teatro, int assentosAmount)
{
  int currentSequence = 0;
  int sequenceStart = 0;
  int sequenceEnd = 0;
  int foundSequences = 0;

  printf("Buscando sequencia com %d ou mais assentos disponiveis na mesma linha", assentosAmount);

  for (int columnIndex = 0; columnIndex < teatro.colunasTamanho; ++columnIndex)
  {
    for (int rowIndex = 0; rowIndex < teatro.linhasTamanho; ++rowIndex)
    {
      if (verificarDisponibilidade(teatro, rowIndex, columnIndex))
      {
        if (sequenceStart > 0)
          sequenceStart = rowIndex + 1;
        else
          sequenceEnd = rowIndex + 1;
        currentSequence++;
      }
      else
      {
        // * prints the sequence once it reachs it limit
        // * there is no need to print multiple sequences inside a bigger
        // * empty chunck, this implementation prints only the big chunk
        if (currentSequence >= assentosAmount)
        {
          foundSequences = 1;
          printf(
              "De %c-%d até %c-%d\n",
              numberToAlphabet(sequenceStart),
              columnIndex,
              numberToAlphabet(sequenceEnd),
              columnIndex);
        }
        sequenceStart = 0;
        sequenceEnd = 0;
        currentSequence = 0;
      }
    }

    sequenceStart = 0;
    sequenceEnd = 0;
    currentSequence = 0;
  }

  if (foundSequences == 0)
    printf("Nenhuma sequencia com %d livres encontradas.\n", assentosAmount);
}
