#ifndef REPOSITORY_HEADER
#define REPOSITORY_HEADER
#include <stdio.h>
#include "../models/Teatro.h"

typedef struct
{
  int (*salvarEstado)(Teatro teatro, char *nomeArquivo);
  Teatro (*carregarEstado)(char *nomeArquivo);
} Repository;

Repository getRepository();
int salvarEstado(Teatro teatro, char *nomeArquivo);
Teatro carregarEstado(char *nomeArquivo);

#endif
