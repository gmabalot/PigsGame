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

	if(m_numCompPlayers > 0){
		cout << "\nWhat difficulty would you like the computer set to (Range: 0 - " + m_maxDifficultyLevels + "): ";
		int temp;
		cin >> temp;
		changeDifficulty(temp);

	}

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
	cout << "\nPlease enter the number of sides you want the die to have: "
	cin >> temp;
	m_numSides = temp;
	cout << "\nPlease specify the amount you would like the game to end at: "
	cin >> temp;
	m_endScore = temp;
	cout << "\nPlease enter any numbers you would like to pass on separated by commas: "
	string s;
	//function to handle this.
}

void GameFunc::beginGame(){
	//Select random player to start.
	srand(time(NULL)); //Initialize random seed.
	int firstPlayer = rand() * m_pVec.size();
	m_curPlayerIndex = firstPlayer;

	//Main loop
	while(!checkWinner()) //While score < m_endScore;
		if(getPlayerChoice()){ // Roll or hold
			if(!rollDie())	// If !(num in m_passNums), add roll to m_holdPoints
				changeTurn();
		}
		else{
			updateHoldScore(); // Add points to 
			changeTurn();
		}
	gameEnd();
}

void GameFunc::gameEnd(){
	cout << "\nGame Over.\n";
	//Ask to play again, if yes, resetScores(), ask for additionalOptions()
}

bool GameFunc::rollDie(){
	int roll = d.getRoll();
	//Check if the roll is a passable num
	int passNumsSize = m_passNums.size();
	for(int i=0;i<passNumsSize;i++)
		if(roll == m_passNums[i]){
			m_holdPoints = 0;
			return false;
		}
	//Otherwise update holdscore
	m_holdPoints += roll;
	return true;
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

bool GameFunc::resetScore(){
	for(i=0; i<m_numPlayers;i++);
		m_pVec[score = 0;
}

void GameFunc::changeDifficulty(int i){
	for(int i=0;i<m_numPlayers;i++)
		if(m_pVec[i].type == 1)
		//Change difficulty of all computer players
	}
}

void GameFunc::updateHoldScore(){
	m_pVec[m_curPlayerIndex].score += m_holdPoints;
	m_holdPoints = 0;
}

void GameFunc::changeTurn(){
	if(m_curPlayerIndex == (m_pVec.size()-1))
		m_curPlayerIndex = 0;
	else
		m_curPlayerIndex++;
}

bool GameFunc::checkWinner(){
	if (m_pVec[m_curPlayerIndex].getPoints >= m_endScore)
		gameEnd();
}

void GameFunc::addNumToPassNums(){
	//add nums to pass to m_passNums
}

void GameFunc::setEndScore(int i){
	m_endScore = i;
}

void GameFunc::addPlayer(string playerName){
	Player p = new Player(playerName);
	m_pVec.push(p);
}