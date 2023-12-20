#include "utils.h"
#define OPTIONS_AMOUNT 14
#define OPTIONS_STRING_MAX_SIZE 45

void printMenu()
{
  char menuOptions[OPTIONS_AMOUNT][OPTIONS_STRING_MAX_SIZE] = {
      "Sair do programa",
      "Salvar estado",
      "Carregar estado",
      "Visualizar",
      "Reservar assento específico",
      "Reservar assentos consecutivos específicos",
      "Reservar assento pelo sistema",
      "Reservar assentos consecutivos pelo sistema",
      "Cancelar reserva de um assento",
      "Cancelar reservas de uma pessoa",
      "Cancelar todas as reservas",
      "Verificar disponibilidade",
      "Consultar assentos consecutivos",
      "Exibir informações",
  };
  printf(" ");
  printf("Opção |");
  printf(" Nome da Operação\n");

  for (int borderIndex = 0; borderIndex < OPTIONS_STRING_MAX_SIZE; ++borderIndex)
    printf("-");
  printf("\n");

  for (int index = 0; index < OPTIONS_AMOUNT; ++index)
  {
    if (index < 10)
      printf(" ");
    printf("   %d  | %s\n", index, menuOptions[index]);
  }
}
