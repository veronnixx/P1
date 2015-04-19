#ifndef CITY_H
    #define CITY_H

typedef struct City
{
  double longitude;
  double latitude;
  char *name;
  char *state;
  char airport; //always has 3 letters + 1 space for '/0' character
  int population;
} City; //City struct


void initialize(City *cityArray);

#endif
