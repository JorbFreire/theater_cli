#ifndef TEATRO_HEADER
#define TEATRO_HEADER

#include "Assento.h"

typedef struct Teatro
{
  Assento **assentos[99];
  int linhasTamanho;
  int colunasTamanho;
} Teatro;

#endif
