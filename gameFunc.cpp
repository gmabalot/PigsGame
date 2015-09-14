/**
* Game Functions.cpp
* @author Thibaut Hardin
*/

#include <stdlib.h> //rand
#include <string>
#include <vector>

#include "gameFunc.h"
#include "player.h"
#include "die.h"

using std::string;
using std::vector;

void GameFunc::beginGame(){

}

void GameFunc::gameEnd(){

}

bool GameFunc::getPlayerChoice(Player p){
	int i = p.getChoice(); //return 0 or 1 for hold/roll
	if(i == 1)
		rollDie(d, p); //Need to create a dice object here
	else{
		updateScore(p);
		changeTurn(vector<Player>* p);//change
	}
}

bool GameFunc::setName(string name, Player p){
	//Call player.setName and handle errors
	p.setName(name);
}

bool GameFunc::resetScore(vector<Player>* p){
	for(Player curPlayer : p)
		curPlayer.score = 0;
}

bool GameFunc::changeDifficulty(int i, vector<Player>* p){
	//Potentially move this const;
	const int MAX_DIF = 3; //4 difficulty levels
	for( Player curPlayer : p)
		if(curPlayer.difficulty >=0 && i>0 && i<MAX_DIF) //-1 indicates human player
			curPlayer.difficulty = i;
	}
}

int GameFunc::rollDie(Die d){
	const int PASS_NUM = 1; //Currently assign 1 as the roll to pass on, potentially modular
	if(d.roll == PASS_NUM)
		holdPoints = 0; //reset temp pts.
	}

void GameFunc::updateScore(Player p){
	p.score += holdPoints;
	holdPoints = 0;
	checkWinner(p);
}

bool GameFunc::changeTurn(vector<Player>* p, Player curPlayer){
	for(Player temp : p)
		if(temp = curPlayer)
			//Select next player.
}

bool GameFunc::checkWinner(Player p){
	if (p.getPoints > 99)
		gameEnd();
}