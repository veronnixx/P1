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

} //sets initial values for Vector and cityArray

void readCities(Vector *cities)
{
  char line[80];
  char *value;
  FILE *file = fopen("citypopulations.csv", "r");
  
  while (fgets(line, 80, file)) 
    {
        value = strtok(line, ",");   
    } // loops through the lines with "," as a delimeter
} //reads and parses citypopulations.csv
 
