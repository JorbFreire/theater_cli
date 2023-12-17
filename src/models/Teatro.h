#ifndef TEATRO_HEADER
#define TEATRO_HEADER

#include "Assento.h"

typedef struct Teatro
{
  Assento **assentos;
  int linhasTamanho;
  int colunasTamanho;
} Teatro;

#endif
