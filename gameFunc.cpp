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
#include "Player.h"
#include "Dice.h"

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
	cout << "What is your name?\n"
	string s;
	addPlayer(s);
	//Not enough time to fully implement
	cout << "\nWould you like to change additional options?\n y / n \n"
	cin >> s;
	if(s=='y' || s=='Y')
		additionalOptions();
}

void GameFunc::additionalOptions(){
	"Please enter the number of players: ";
	int temp;
	cin >> temp;
	m_numPlayers = temp;
	cout << "\nPlease enter the number of computer players: ";
	cin >> temp;
	m_numCompPlayers = temp;
	//Requires separate function to reassign d
	cout << "\nPlease enter the number of sides you want the die to have."
	cin >> temp;
	m_numSides = temp;
}

void GameFunc::beginGame(){
	//Select random player to start.
	srand(time(NULL)); //Initialize random seed.
	int firstPlayer = rand() * m_pVec.size();
	m_curPlayerIndex = firstPlayer;
	if(getPlayerChoice())
		getRoll();

}

void GameFunc::gameEnd(){
	cout << "Game Over.\n";

}

int GameFunc::rollDie(){
	int roll = d.getRoll();
	int passNumsSize = m_passNums.size();
	for(int i=0;i<passNumsSize;i++)
		if(roll == m_passNums[i])
			return 0;
	else
}

int GameFunc::getNumPlayers(){
	return m_numPlayers;
}

bool GameFunc::getPlayerChoice(){
	cout << "Roll or Hold (r/h): \n";
	string input;
	cin >> input;
	if(input == r)
		return true;
	return false;

}

bool GameFunc::setName(string name){
	//Call player.setName and handle errors
	p.setName(name);
}

bool GameFunc::resetScore(){
	for(Player curPlayer : pVec)
		curPlayer.score = 0;
}

bool GameFunc::changeDifficulty(int i){
	for( Player curPlayer : m_pVec)
		//Change difficulty of all computer players
	}
}

void GameFunc::updateHoldScore(){
	p.score += holdPoints;
	holdPoints = 0;
	checkWinner(p);
}

bool GameFunc::changeTurn(){
	if(m_curPlayerIndex == (m_pVec.size()-1))
		m_curPlayerIndex = 0;
	else
		m_curPlayerIndex++;
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

void GameFunc::addPlayer(string playerName){
	Player p = new Player(playerName);
	m_pVec.push(p);
}