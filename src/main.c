#include <stdio.h>
#include "models/Teatro.h"
#include "controllers/teatroController/teatroController.h"

int main()
{
  TeatroController teatroController = getTeatroController();
  printf("hello world\n");
  Teatro teatro = teatroController.criarTeatro(20, 20);
  return 1;
}
