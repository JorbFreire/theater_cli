#ifndef RESERVA_CONTROLLER_HEADER
#define RESERVA_CONTROLLER_HEADER

#include "../../models/Teatro.h"
#include "../../models/Assento.h"
#include "../assentoController/assentoController.h"

typedef struct
{
  int (*reservarAssento)(Teatro teatro, int linha, int coluna, char *nome);
  int (*reservarAssentosConsecutivos)(Teatro teatro, int linha, int coluna, int assentosAmount, char *nome);
  void (*reservarAssentosConsecutivosPeloSistema)(Teatro teatro, int assentosAmount, char *nome);

  int (*cancelarReserva)(Teatro teatro, int linha, int coluna);
  int (*cancelarReservas)(Teatro teatro, char *nome);
  int (*cancelarTodasAsReservas)(Teatro teatro);
} ReservaController;

ReservaController getReservaController();
int reservarAssento(Teatro teatro, int linha, int coluna, char *nome);
int reservarAssentosConsecutivos(Teatro teatro, int startRow, int coluna, int assentosAmount, char *nome);
void reservarAssentosConsecutivosPeloSistema(Teatro teatro, int assentosAmount, char *nome);

int cancelarReserva(Teatro teatro, int linha, int coluna);
int cancelarReservas(Teatro teatro, char *nome);
int cancelarTodasAsReservas(Teatro teatro);

#endif
