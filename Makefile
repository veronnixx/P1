simulator.out: main.o city.o vector.o
	g++ -Wall -ansi -g main.o city.o vector.o -o simulator.out

vector.o: vector.cpp vector.h city.h
	g++ -Wall -ansi -g -c vector.cpp
main.o: main.cpp vector.h
	g++ -Wall -ansi -g -c main.cpp
city.o: city.cpp city.h
	g++ -Wall -ansi -g -c city.cpp
clean:
	rm -f  main.o  city.o  vector.o  simulator.out
