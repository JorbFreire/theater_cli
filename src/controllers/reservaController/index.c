#include "reservaController.h"

ReservaController getReservaController()
{
  ReservaController reservaController;
  reservaController.reservarAssento = reservarAssento;
  reservaController.cancelarReserva = cancelarReserva;
  return reservaController;
}
