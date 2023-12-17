#include <stdio.h>
#include "controllers/teatroController/teatroController.h"
#include "repository/repository.h"

int main()
{
  Repository repository = getRepository();
  printf("hello world\n");

  Teatro teatro = repository.carregarEstado("data.txt");
  repository.salvarEstado(teatro, "data.txt");

  return 1;
}
