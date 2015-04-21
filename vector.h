#ifndef VECTOR_H
  #define VECTOR_H

#include "city.h"

typedef struct Vector
{
  City *cityArray;
  int size;
  int count;
} Vector;

void initialize(Vector *cities);
void readCities(City *cityArray);

#endif
