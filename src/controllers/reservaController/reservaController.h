#ifndef ASSENTO_CONTROLLER_HEADER
#define ASSENTO_CONTROLLER_HEADER

#include "../../models/Teatro.h"
#include "../../models/Assento.h"
#include "../../utils/utils.h"

typedef struct
{
  int (*reservarAssento)(Teatro teatro, int linha, int coluna, char *nome);
  int (*cancelarReserva)(Teatro teatro, int linha, int coluna);
  int (*cancelarReservas)(Teatro teatro, char *nome);
  int (*cancelarTodasAsReservas)(Teatro teatro);
} ReservaController;

ReservaController getReservaController();
int reservarAssento(Teatro teatro, int linha, int coluna, char *nome);
int cancelarReserva(Teatro teatro, int linha, int coluna);
int cancelarReservas(Teatro teatro, char *nome);
int cancelarTodasAsReservas(Teatro teatro);

#endif
