#include "repository.h"

Repository getRepository()
{
  Repository repository;
  repository.carregarEstado = carregarEstado;
  repository.salvarEstado = salvarEstado;
  return repository;
}
