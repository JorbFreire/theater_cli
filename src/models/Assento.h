#ifndef ASSENTO_HEADER
#define ASSENTO_HEADER

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
