#include <iostream>

int position
int index = 0
int trackLength

init(int id, int trackLength);

void advance(int HorseNum, int horses[]) {
	horses[HorseNum] =+ coin;


};


void printLane(int HorseNum, int horses[]) {
	for (int hn = 0; hn < TrackLength; hn++) {
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
	if (horses[HorseNum] == TrackLength) {
			result = true;
			std::cout << "Horse" {hn} "won!" << std::endl;
	} // end if
	return result;

} // end isWinner
