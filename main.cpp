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
  printf("Please enter two airport abbreviations (XXX XXX = done): ");
  Vector cities;
  run(&cities);
  return 0;
} //run and free the memory in the end

