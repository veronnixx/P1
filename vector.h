#ifndef VECTOR_H
  #define VECTOR_H

#include "city.h"

typedef struct VECTOR_STRUCT
{
  City *cityArray;
  int size;
  int count;
} Vector; //declares a VECTOR_STRUCT called Vector

void initialize(Vector *cities);

void readCities(Vector *cities);
void deallocate(Vector *cities);
void calcDistance(const Vector *cities, int index1, int index2);
void cleanCities(Vector *cities);
int findAirport(const Vector *cities, const char *airport);
void readAirports(Vector *cities);
void resize(Vector *cities);

#endif
