#include "vector.h"
#include <stdlib.h>
#include <stdio.h>

void run(Vector *cities)
{
  initialize(cities);
  readCities(cities);
  return;
}


int main()
{
  Vector cities;
  run(&cities);
  return 0;
}

