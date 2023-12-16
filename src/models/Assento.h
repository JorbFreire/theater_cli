#ifndef ASSENTO_HEADER
#define ASSENTO_HEADER
#define MAX_NAME_LENGTH 99

struct Assento
{
  // boolean
  int reservado;

  int linha;
  int coluna;
  char **nome[99];
};

typedef Assento;

#endif
