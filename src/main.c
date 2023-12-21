#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "controllers/teatroController/teatroController.h"
#include "controllers/matrizController/matrizController.h"
#include "controllers/assentoController/assentoController.h"
#include "controllers/reservaController/reservaController.h"
#include "repository/repository.h"
#include "utils/utils.h"

#define MAX_ROWS_AMOUNT 26
#define MAX_COLUMNS_AMOUNT 99

int main()
{
  Repository repository = getRepository();
  TeatroController teatroController = getTeatroController();
  ReservaController reservaController = getReservaController();
  MatrizController matrizController = getMatrizController();

  Teatro teatro = teatroController.criarTeatro(6, 6);

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
      char fileName[50];
      printf("Insira o nome do arquivo para salvar o estado atual:\n");
      scanf("%s", fileName);
      repository.salvarEstado(teatro, fileName);
    }
    else if (selectedMenuOption == 2)
    {
      char fileName[50];
      printf("Insira o nome do arquivo para carregar um teatro:\n");
      scanf("%s", fileName);
      matrizController.liberarMatriz(teatro.assentos, teatro.linhasTamanho);
      teatro = repository.carregarEstado(fileName);
    }
    else if (selectedMenuOption == 3)
    {
      teatroController.exibirTeatro(teatro);
    }
    else if (selectedMenuOption == 4)
    {
      int selectedColumn = 0;
      char selectedRow;
      char name[50];

      while (selectedColumn <= 0 || selectedColumn > teatro.colunasTamanho)
      {
        printf("Qual a coluna do assento que deseja reservar? (Número de 1 a %d)\n", teatro.colunasTamanho);
        scanf("%d", &selectedColumn);
        if (selectedColumn <= 0 || selectedColumn > teatro.colunasTamanho)
          printf("Erro: A coluna deve ser um numero entre 1 e %d\n", teatro.colunasTamanho);
      }
      while (isalpha(selectedRow))
      {
        printf("Qual a linha do assento que deseja reservar? (Letra de 'A' á '%c')\n", numberToAlphabet(teatro.linhasTamanho));
        scanf("%c", &selectedRow);
        if (isalpha(selectedRow))
          printf("Erro: A linha deve ser uma letra entre 'A' e '%d'\n", teatro.linhasTamanho);
      }
      printf("Em qual nome deseja reservar o assento %c-%d)\n", selectedRow, selectedColumn);
      scanf("%s", name);
      reservaController.reservarAssento(teatro, alphabetToNumber(selectedRow), selectedColumn, name);
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
      char selectedRow;
      while (selectedColumn <= 0 || selectedColumn > teatro.colunasTamanho)
      {
        printf("Qual a coluna do assento que deseja cancelar? (Número de 1 a %d\n)", teatro.colunasTamanho);
        scanf("%d", &selectedColumn);
        if (selectedColumn <= 0 || selectedColumn > teatro.colunasTamanho)
          printf("Erro: A coluna deve ser um número entre 1 e %d\n", teatro.colunasTamanho);
      }
      while (isalpha(selectedRow))
      {
        printf("Qual a linha do assento que deseja cancelar? (Letra de 'A' a '%c'\n)", numberToAlphabet(teatro.linhasTamanho));
        scanf("%c", &selectedRow);
        if (isalpha(selectedRow))
          printf("Erro: A linha deve ser uma letra entre entre 'A' e %d\n", numberToAlphabet(teatro.linhasTamanho));
      }
      reservaController.cancelarReserva(teatro, alphabetToNumber(selectedRow), selectedColumn);
    }
    else if (selectedMenuOption == 9)
    {
      char name[50];
      printf("Em qual nome estão as reservar que deseja cancelar?\n)");
      scanf("%s", name);
      reservaController.cancelarReservas(teatro, name);
    }
    else if (selectedMenuOption == 10)
    {
      printf("Cancelando todas as reservas!");
      reservaController.cancelarTodasAsReservas(teatro);
    }
    else if (selectedMenuOption == 11)
    {
      int selectedColumn;
      char selectedRow;
      printf("Informe a coluna do assento que deseja verificar");
      scanf("%d", &selectedColumn);
      printf("Informe a linha do assento que deseja verificar");
      scanf("%c", &selectedRow);
      if (verificarDisponibilidade(teatro, alphabetToNumber(selectedRow), selectedColumn))
        printf("Assento %c-%d está disponivel", selectedRow, selectedColumn);
      else
        printf("Assento %c-%d não está disponivel", selectedRow, selectedColumn);
    }
    else if (selectedMenuOption == 12)
    {
      // ! not built
      printf("selectedMenuOption: %d\n", selectedMenuOption);
    }
    else if (selectedMenuOption == 13)
    {
      exibirInformacoes(teatro);
    }
    else if (selectedMenuOption == 14)
    {
      int columnsAmount = 0;
      int rowsAmount = 0;
      while (columnsAmount <= 0 || columnsAmount > MAX_COLUMNS_AMOUNT)
      {
        printf("Quantas colunas tera o teatro? (Numero de 1 a %d)\n", MAX_COLUMNS_AMOUNT);
        scanf("%d", &columnsAmount);
        if (columnsAmount <= 0 || columnsAmount > MAX_COLUMNS_AMOUNT)
          printf("Erro: A quantidade de colunas deve ser um numero entre 1 e %d\n", MAX_COLUMNS_AMOUNT);
      }
      while (rowsAmount <= 0 || rowsAmount > MAX_ROWS_AMOUNT)
      {
        printf("Quantas linhas tera o teatro? (Numero de 1 a %d)\n", MAX_ROWS_AMOUNT);
        scanf("%d", &rowsAmount);
        if (rowsAmount <= 0 || rowsAmount > MAX_ROWS_AMOUNT)
          printf("Erro: A quantidade de linhas deve ser um numero entre 1 e %d\n", MAX_ROWS_AMOUNT);
      }
      teatro = teatroController.criarTeatro(rowsAmount, columnsAmount);
      matrizController.liberarMatriz(teatro.assentos, teatro.linhasTamanho);
    }
    else
    {
      printf("Escolha uma opção valida!\n");
    }
  }
  return 1;
}
