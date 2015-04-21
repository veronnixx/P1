#ifndef CITY_H
    #define CITY_H

typedef struct City
{
  double longitude;
  double latitude;
  char *name;
  char *state;
  char airport[4]; //airport[4] always has 3 letters + 1 space for '/0' character
  int population;
} City; //City struct

void initialize(City *city);
void deallocate(City *city);
void calcDistance(const City *city1, const City *city2);
void copyLocation(City *destCity, const City *srcCity);
bool hasAirport(City *city);
bool isEqual(const City *city, const City *city2);
void readAirport(City *city, char *line);
//void readCity(City *city, FILE *fp);
void setAirport(City *city, const char *airport);

#endif // CITY_H
