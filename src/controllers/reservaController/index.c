#include "reservaController.h"

ReservaController getReservaController()
{
  ReservaController reservaController;
  reservaController.reservarAssento = reservarAssento;
  reservaController.reservarAssentosConsecutivos = reservarAssentosConsecutivos;
  reservaController.reservarAssentosConsecutivosPeloSistema = reservarAssentosConsecutivosPeloSistema;
  reservaController.cancelarReserva = cancelarReserva;
  reservaController.cancelarReservas = cancelarReservas;
  reservaController.cancelarTodasAsReservas = cancelarTodasAsReservas;
  return reservaController;
}
