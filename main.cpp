#include "Dice.h"
#include "Player.h"
#include "gameFunc.h"
#include <iostream>

using namespace std;


int main()
{

	gameFunc gf = new GameFunc();
	gf.startMessage();
	gf.beginGame();

	return 0;
};