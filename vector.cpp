#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include "city.h"
void initialize(Vector *cities)
{
  int i;
  for (i=0;i < 10; i++)
 {
    cities->cityArray[i] = (City *)malloc(sizeof(City));
    initialize(cities->cityArray[i]);
 }
  //City *cityArray = (City*) malloc(sizeof(City));
  cities->size = 10;
  cities->count = 0;

  //create new:
  //cityArray[i] = malloc(10 + sizeof(struct City));
  //set up its members:
  //cityArray[i]->size = 0;

  // v->cityArray
  //use malloc to create cityArray
  //sets size
  //sets count
  //calls initialize in city.cpp 10 times

}



