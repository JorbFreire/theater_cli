#include <stdio.h>
#include <stdlib.h>

#include "controllers/teatroController/teatroController.h"
#include "controllers/assentoController/assentoController.h"
#include "controllers/reservaController/reservaController.h"
#include "repository/repository.h"
#include "utils/utils.h"

void menuLoop()
{
}

int main()
{
  Teatro teatro;
  Repository repository = getRepository();
  TeatroController teatroController = getTeatroController();
  ReservaController reservaController = getReservaController();

  int selectedMenuOption;

  while (1)
  {
    printMenu();
    scanf("%d", &selectedMenuOption);
    if (selectedMenuOption == 0)
    {
      exit(0);
    }
    else if (selectedMenuOption == 1)
    {
      char *fileName = "";
      printf("Insira o nome do arquivo para salvar o estado atual");
      scanf("%s", fileName);
      repository.salvarEstado(teatro, "data.txt");
    }
    else if (selectedMenuOption == 2)
    {
      char *fileName = "";
      printf("Insira o nome do arquivo para carregar um teatro");
      scanf("%s", fileName);
    }
    else if (selectedMenuOption == 3)
    {
      // ! not built
      printf("selectedMenuOption: %d\n", selectedMenuOption);
    }
    else if (selectedMenuOption == 4)
    {
      int selectedColumn;
      int selectedRow;
      char *name = "";

      printf("Qual a coluna do assento que deseja reservar? (Número de 0 a %d\n)", teatro.colunasTamanho);
      scanf("%d", &selectedColumn);
      printf("Qual a linha do assento que deseja reservar? (Número de 0 a %d\n)", teatro.linhasTamanho);
      scanf("%d", &selectedRow);
      printf("Em qual nome deseja reservar o assento %d-%d\n)", selectedColumn, selectedRow);
      scanf("%s", name);
      reservaController.reservarAssento(teatro, selectedRow, selectedColumn, name);
    }
    else if (selectedMenuOption == 5)
    {
      // ! not built
      printf("selectedMenuOption: %d\n", selectedMenuOption);
    }
    else if (selectedMenuOption == 6)
    {
      // ! not built
      printf("selectedMenuOption: %d\n", selectedMenuOption);
    }
    else if (selectedMenuOption == 7)
    {
      // ! not built
      printf("selectedMenuOption: %d\n", selectedMenuOption);
    }
    else if (selectedMenuOption == 8)
    {
      int selectedColumn;
      int selectedRow;
      printf("Qual a coluna do assento que deseja cancelar? (Número de 0 a %d\n)", teatro.colunasTamanho);
      scanf("%d", &selectedColumn);
      printf("Qual a linha do assento que deseja cancelar? (Número de 0 a %d\n)", teatro.linhasTamanho);
      scanf("%d", &selectedRow);
      reservaController.cancelarReserva(teatro, selectedRow, selectedColumn);
    }
    else if (selectedMenuOption == 9)
    {
      char *name = "";
      printf("Em qual nome estão as reservar que deseja cancelar?\n)");
      scanf("%s", name);
      reservaController.cancelarReservas(teatro, name);
    }
    else if (selectedMenuOption == 10)
    {
      printf("Cancelando todas as reservas!");
      reservaController.cancelarTodasAsReservas(teatro);
    }
    else
    {
      printf("Escolha uma opção valida!\n");
      menuLoop();
    }
  }

  // Teatro teatro = repository.carregarEstado("data.txt");

  // reservaController.reservarAssento(teatro, 4, 9, "Um Nome");
  // cancelarReserva(teatro, 4, 2);

  // teatroController.exibirTeatro(teatro);
  return 1;
}
