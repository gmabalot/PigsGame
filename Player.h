#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string.h>

class Player{
	int score;
	std::string name;

	public:
		Player(std::string name);
		~Player();
		// Getters
		std::string getName() {return name;}
		int getScore() {return score;}
		// Setters
		void setName(std::string new_name) {this->name = new_name;}
		int increaseScore(int score_inc) {score += score_inc; return score;}
};

#endif