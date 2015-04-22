#include <stdio.h>
#include "city.h"

void initialize(City *cityArray)
{
  cityArray->longitude = 0;
  cityArray->latitude = 0;
  cityArray->name = NULL;
  cityArray->state = NULL;
  cityArray->airport[0] = '\0';
  cityArray->population = 0;
} // initializes, sets NULL and 0 values to members of cityArray 

void readAirport(City *cityArray, char *line)
{
  
} //take new line and parse it

bool isEqual(const City *cityArray, const City *city2)
{
  
} //compares the names of 2 city names and returns bool

void copyLocation(City *destCity, const City *srcCity)
{
  
} //copy data from local variable from to appropriate City in the array

void deallocate(City *cityArray)
{
  
  
} //free memory to avoid memory leaks

bool hasAirport(City *cityArray)
{
  
} //checks whether a city has an airport, returns bool

void setAirport(City *cityArray, const char *airport)
{
  
} //set the airport of a local City variable of findAirport()

void calcDistance(const City *city1, const City *city2)
{
  
} //calculate distance

