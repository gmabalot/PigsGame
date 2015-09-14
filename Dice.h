#ifndef DICE_H
#define DICE_H

class Dice{
	int sides;
	public:
		// Constructor / Destructor
		Dice(int num_sides);
		~Dice();
		// Getters
		int getNumSides() { return sides; };
		// Setters
		int setNumSides(int num_sides) { this->sides = num_sides; };
		// Actions
		int getRoll();
};

#endif