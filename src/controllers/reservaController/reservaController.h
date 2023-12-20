#ifndef RESERVA_CONTROLLER_HEADER
#define RESERVA_CONTROLLER_HEADER

#include "../../models/Teatro.h"
#include "../../models/Assento.h"
#include "../assentoController/assentoController.h"

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
