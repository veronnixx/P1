#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include "city.h"
#define MAX 80

void initialize(Vector *cities)
{

  initialize(cities -> city);
  cities -> city = (City *) malloc(10 * sizeof(City));
  
  cities -> size = 10;
  cities -> count = 0;

}

void readCities(Vector *cities)
{
  char line[MAX];
  char *value;
  FILE *file = fopen("citypopulations.csv", "r");
         while (fgets(line, MAX, file)) {
	   value = strtok(line, ","); 
	     
	 }
}
 
