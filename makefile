horseRace: main.cpp
	g++ -g main.cpp horse.cpp -o horseRace

run: horseRace
	./horseRace
