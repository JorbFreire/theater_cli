#include <ctype.h>
#include "utils.h"

int alphabetToNumber(char letter)
{
  if (isalpha(letter))
    return letter - 'a' + 1;
  else
    return -1;
}