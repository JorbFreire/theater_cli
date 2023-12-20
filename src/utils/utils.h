#ifndef UTILS_HEADER
#define UTILS_HEADER

#include <stdio.h>
#include "../models/Teatro.h"

void printMenu();
void exibirInformacoes(Teatro teatro);
int verificarDisponibilidade(Teatro t, int linha, int coluna);

#endif
