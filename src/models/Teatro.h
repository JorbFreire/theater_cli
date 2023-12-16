#ifndef TEATRO_HEADER
#define TEATRO_HEADER

#include "Assento.h"

struct Teatro
{
  Assento **assentos[99];
  int linhasTamanho;
  int colunasTamanho;
};

typedef Teatro;

#endif
