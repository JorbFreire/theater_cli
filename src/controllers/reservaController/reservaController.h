#ifndef ASSENTO_CONTROLLER_HEADER
#define ASSENTO_CONTROLLER_HEADER

#include "../../models/Teatro.h"
#include "../../models/Assento.h"
typedef struct
{
  int (*reservarAssento)(Teatro teatro, int linha, int coluna, char *nome);
} ReservaController;

ReservaController getReservaController();
int reservarAssento(Teatro teatro, int linha, int coluna, char *nome);

#endif
