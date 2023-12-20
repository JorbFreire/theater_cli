#include "reservaController.h"

ReservaController getReservaController()
{
  ReservaController reservaController;
  reservaController.reservarAssento = reservarAssento;
  reservaController.cancelarReserva = cancelarReserva;
  reservaController.cancelarReservas = cancelarReservas;
  reservaController.cancelarTodasAsReservas = cancelarTodasAsReservas;
  return reservaController;
}
