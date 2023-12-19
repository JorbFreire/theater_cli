#include <stdio.h>
#include "controllers/teatroController/teatroController.h"
#include "repository/repository.h"

int main()
{
  Repository repository = getRepository();
  TeatroController teatroController = getTeatroController();

  Teatro teatro = repository.carregarEstado("data.txt");
  teatroController.exibirTeatro(teatro);
  repository.salvarEstado(teatro, "data.txt");

  return 1;
}
