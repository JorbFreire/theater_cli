#include <ctype.h>
#include "utils.h"

int alphabetToNumber(char letter)
{
  if (isalpha(letter))
    return tolower(letter) - 'a' + 1;
  else
    return -1;
}