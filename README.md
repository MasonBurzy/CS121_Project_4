# CS121-Project-4

```
Made a UML for algorithm


need: horse.h horse.cpp race.h race.cpp main.cpp makefile



classDiagram

class Horse {
- int position
	horse's current position on track
- int id
	unique for each horse
- int trackLength
+ Horse()
+ init(int id, int trackLength)
+ void advance()
	coin flip 1 out of 2 (50%)
	call advance for each horse
+ void printLane()
	call to print the horse's lane
+ bool isWinner()
	check if any horse has won

}

class Race {
- const int TRACK_LENGTH
- const static int NUM_HORSES
- Horse horses[NUM_HORSES]
- Race()
+ void run()

}



