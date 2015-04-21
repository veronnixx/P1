#include <stdio.h>
#include "city.h"

void initialize(City *city)
{
  city->longitude = 0;
  city->latitude = 0;
  city->name = NULL;
  city->state = NULL;
  city->airport[0] = '\0'; //always has 3 letters + 1 space for '/0' character
  city->population = 0;
}

