#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
  int count = 0;  
  char line[80];
  char *value;
  FILE *file = fopen("citypopulations.csv", "r");
  
  while (fgets(line, 80, file)) 
    {   
      for(i=0; i<
	printf("%s", line);

        value = strtok(line, ",");  
	cities->cityArray = (City *) malloc(1+sizeof(City));	
	strcpy(cities->cityArray[i].name,value); 

	value = strtok(NULL,",");
	cities->cityArray = (City *) malloc(1+sizeof(City));
	strcpy(cities->cityArray[i].state,value);

	value = strtok(NULL, ",");
	cities->cityArray = (City *) malloc(1+sizeof(City));
	cities->cityArray[i].population = atoi(value);

	cities->count++;
	cities->cityArray = 
    } // loops through the lines with "," as a delimeter
} //reads and parses citypopulations.csv

void resize(Vector *cities)
{
 // initilaze(//upper half of the array)
  //malloc of City
  //free cityArray
} //resize the array

void readAirports(Vector *cities)
{
   
} //read airportsLL.txt






void cleanCities(Vector *cities)
{
 
} //remove cities without airports from the array

int findAirport(const Vector *cities, const char *airport)
{
	return 0;  
} //finds appropriate airport

void calcDistance(const Vector *cities, int index1, int index2)
{
  
}//calculate distance





