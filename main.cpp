#include "vector.h"
#include <stdlib.h>
#include <stdio.h>

void run(Vector *cities)
{
  initialize(cities);
  readCities(cities);
  return;
} //interacts with user


int main()
{
  Vector cities;
  run(&cities);
  return 0;
} //run and free the memory in the end

