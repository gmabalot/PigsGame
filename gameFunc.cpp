/**
* Game Functions.cpp
* @author Thibaut Hardin
*/

#include <stdlib.h> //rand
#include <time.h>
#include <string>
#include <vector>
#include <iostream>

#include "gameFunc.h"
#include "player.h"
#include "die.h"

using std::string;
using std::vector;

void GameFunc::startMessage(){
	string gameName[8] = {" _____ _            _____                     ",
 	"|  __ (_)          / ____|                     ",
 	"| |__) |  __ _ ___| |  __  __ _ _ __ ___   ___ ",
 	"|  ___/ |/ _` / __| | |_ |/ _` | '_ ` _ \\ / _ \\",
 	"| |   | | (_| \\__ \\ |__| | (_| | | | | | |  __/",
 	"|_|   |_|\\__, |___/\\_____|\\__,_|_| |_| |_|\\___|",
    "          __/ |                                ",
    "         |___/                                 "};

    //Simple for loop to print
	for(int i=0;i<8;i++)
		cout << gameName[i] << endl;

	cout << "\n\nWelcome to PigsGame!\n"+
	"Please enter the number of players: ";
	int temp;
	cin >> temp;
	m_numPlayers = temp;
	cout << "\nPlease enter the number of computer players: ";
	cin >> temp;
	m_numCompPlayers = temp;
	cout << "\nWould you like to change additional options?\n y / n \n"
	string s;
	cin >> s;
	if(s=='y' || s=='Y')
		additionalOptions();
}



void GameFunc::beginGame(){
	//Select random player to start.

	m_pVec.push()
	srand(time(NULL)); //Initialize random seed.
	int firstPlayer = rand() * m_pVec.size();

}

void GameFunc::gameEnd(){
}

int GameFunc::getNumPlayers(){
	return m_numPlayers;
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

bool GameFunc::resetScore(){
	for(Player curPlayer : pVec)
		curPlayer.score = 0;
}

bool GameFunc::changeDifficulty(int i){
	//Potentially move this const;
	for( Player curPlayer : pVec)
		if(curPlayer.difficulty >=0 && i>0 && i<m_maxDifficultyLevels) //-1 indicates human player
			curPlayer.difficulty = i;
	}
}

int GameFunc::rollDie(Die d){
	int dieNum = d.roll;
	for(int i : m_passNums)
		if(i == dieNum)
			holdPoints = 0; //reset temp pts if 
	}
	if(holdPoints==0)
		if(!changeTurn)
			//console.log("Error changing turn.");


void GameFunc::updateHoldScore(Player p){
	p.score += holdPoints;
	holdPoints = 0;
	checkWinner(p);
}

bool GameFunc::changeTurn(){
	
}

bool GameFunc::checkWinner(){
	if (p.getPoints >= m_endScore)
		gameEnd();
}

void GameFunc::addNumToPassNums(vector<int> nums){
	for(int i : nums)
		m_passNums.push(i);
}

void GameFunc::setEndScore(int i){
	m_endScore = i;
}

void GameFunc::addPlayer(string playerName, int playerType){
	if(playerType == 0)
		Player p = new Player(player);
	else


}



void GameFunc::addPlayers(){

}
