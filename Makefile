simulator.out: main.o city.o vector.o
	g++ -Wall -ansi -g -o simulator.out main.o city.o vector.o

vector.o: vector.cpp vector.h
	g++ -Wall -ansi -g vector.cpp
main.o: main.cpp vector.h
	g++ -Wall -ansi -g main.cpp

city.o: city.cpp city.h
	g++ -Wall -ansi -g city.cpp
clean:
	rm -f main.o city.o vector.o simulator.out
