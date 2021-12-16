#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "make_rand_in_range_function.h"
MAKE_RAND_IN_RANGE_FUNCTION(int)

int main()
{
  int i, count;
  srand(time(NULL));
  for (i = 0, count = 5; i < count; i++) {
    printf("%d\n", int_rand_in_range(1, 10));
  }
  return 0;
}