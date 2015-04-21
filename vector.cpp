#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include "city.h"

void initialize(Vector *cities)
{

  initialize(cities -> cityArray);
  cities -> cityArray = (City *) malloc(10 * sizeof(City));
  
  cities -> size = 10;
  cities -> count = 0;

}

void readCities(City *cityArray)
{
  FILE *fp;
  fp =  fopen("citypopulations.csv", "r");

  while(1)
  {
    c = fgetc(fp);
    if(feof(fp))
      {
	break;
      }
    printf("%c", c);
  }
 
  fclose(fp);
}

  
