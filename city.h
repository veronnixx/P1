#ifndef CITY_H
    #define CITY_H

typedef struct CITY_STRUCT
{
  double longitude;
  double latitude;
  char *name;
  char *state;
  char airport[4];
  int population;
} City; //City struct

void initialize(City *cityArray);
void deallocate(City *cityArray);
void calcDistance(const City *city1, const City *city2);
void copyLocation(City *destCity, const City *srcCity);
bool hasAirport(City *cityArray);
bool isEqual(const City *cityArray, const City *city2);
void readAirport(City *cityArray, char *line);
//void readCity(City *city, FILE *fp);
void setAirport(City *cityArray, const char *airport);

#endif // CITY_H
