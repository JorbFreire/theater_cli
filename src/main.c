#include <stdio.h>
#include "controllers/teatroController/teatroController.h"
#include "controllers/assentoController/assentoController.h"
#include "controllers/reservaController/reservaController.h"
#include "repository/repository.h"

int main()
{
  Repository repository = getRepository();
  TeatroController teatroController = getTeatroController();
  ReservaController reservaController = getReservaController();
  Teatro teatro = repository.carregarEstado("data.txt");

  reservaController.reservarAssento(teatro, 4, 2, "Um Nome");

  teatroController.exibirTeatro(teatro);
  repository.salvarEstado(teatro, "data.txt");

  return 1;
}
