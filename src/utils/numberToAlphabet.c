#include "utils.h"

char numberToAlphabet(int number)
{
  if (number >= 1 && number <= 26)
  {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int index = number - 1;
    return alphabet[index];
  }
  return 'a';
}
