#include "Dice.h"
#include <stdlib.h>
#include <time.h>

Dice::Dice(int num_sides){
	srand(time(NULL));
	this->sides = num_sides;
}

Dice::~Dice(){

}

int Dice::getRoll(){
	return rand()%(this->sides) + 1; // + min to compensate for 0 roll
}