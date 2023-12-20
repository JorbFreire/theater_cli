#include "reservaController.h"

ReservaController getReservaController()
{
  ReservaController reservaController;
  reservaController.reservarAssento = reservarAssento;
  return reservaController;
}
