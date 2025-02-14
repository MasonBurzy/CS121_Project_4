race.o: race.h race.cpp
	g++ -c -c race.cpp

horse.o: horse.cpp horse.h
	g++ -g -c horse.cpp

horseRace: main.cpp
	g++ -g main.cpp horse.cpp -o horseRace

run: horseRace
	./horseRace
