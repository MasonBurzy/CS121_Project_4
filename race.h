#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"


class Race {
	private:
		const int TRACK_LENGTH = 15;
		const static int NUM_HORSES = 5;
		Horse horses[NUM_HORSES];
		Race();
	public:
		void run();

};

#endif




/// Original Code ///

/*

#ifndef RACE_H_EXISTS

#define RACE_H_EXISTS

class Race {
	private:
		const int TRACK_LENGTH;
		const static int NUM_HORSES;
		Horse horses[NUM_HORSES];
		Race();
	public:
		void run();

}

*/
