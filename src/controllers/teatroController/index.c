#include "teatroController.h"

TeatroController getTeatroController()
{
  TeatroController teatroController;
  teatroController.criarTeatro = criarTeatro;
  teatroController.exibirTeatro = exibirTeatro;
  return teatroController;
}
