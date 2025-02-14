#include <iostream>
#include <random>
#include "horse.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

Horse::Horse(){
	Horse::index = 0;
	Horse::trackLength = 0;
	Horse::position = 0;
}


void Horse::init(int id, int trackLength){
	Horse::index = id;
	Horse::trackLength = trackLength;
	Horse::position = 0;
}

void Horse::advance() {
	return;
}


void Horse::printLane(){
	for(int hn = 0; hn < Horse::trackLength; hn++) {
		if(hn == Horse::position) {
			std::cout << " {hn}" <<std::endl;
		} // end if

		else {
			std::cout << "." << std::endl;
		} // end else
	
	} // end for

} // end printLane


bool Horse::isWinner() {
bool result = false;
	if (Horse::position >= Horse::trackLength) {
		result = true;
		std::cout << "Horse " << Horse::position << " won!" << std::endl;
	} // end if

	return result;

} // end isWinner




/// Original Code ///

/*

int position;
int id;
int trackLength;

init(int id, int trackLength);

void advance(int HorseNum, int horses[]) {
	horses[HorseNum] =+ coin;


};


void printLane(int HorseNum, int horses[]) {
	for (int hn = 0; hn < trackLength; hn++) {
		if(hn == horses[HorseNum]) {
			std::cout << " {hn}" << std::endl;
		} // end if 
		
		else {
			std::cout << "." << std::endl;
		} // end else

	} // end for

} // end printLane



bool isWinner(int HorseNum, int horses[]) {
bool result = false;
	if (horses[HorseNum] == trackLength) {
			result = true;
			std::cout << "Horse" +  {hn} +  "won!" << std::endl;
	} // end if
	return result;

} // end isWinner

*/
