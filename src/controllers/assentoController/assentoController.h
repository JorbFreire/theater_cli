#ifndef ASSENTO_CONTROLLER_HEADER
#define ASSENTO_CONTROLLER_HEADER

#include <stdio.h>
#include "../../models/Teatro.h"

int verificarDisponibilidade(Teatro teatro, int linha, int coluna);
void consultarAssentosConsecutivos(Teatro teatro, int assentosAmount);

#endif
