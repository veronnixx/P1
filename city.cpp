#include <stdio.h>
#include "city.h"

void initialize(City *cityArray)
{
  cityArray->longitude = 0;
  cityArray->latitude = 0;
  cityArray->name = NULL;
  cityArray->state = NULL;
  cityArray->airport = NULL; //always has 3 letters + 1 space for '/0' character
  cityArray->population = 0;

}


int main()
{
  return 0;
}
