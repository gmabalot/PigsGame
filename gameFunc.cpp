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

/**
* startMessage - this function displays the game title and has the player
* set their name and game attributes
*/
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

/**
* This function is called when the player would like additional options
*/
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

/**
* beginGame - this function begins the game
*/
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


/*
* gameEnd - this function ends the game
*/
void GameFunc::gameEnd(){
	cout << "\nGame Over.\n";
	//Ask to play again, if yes, resetScores(), ask for additionalOptions()
}

/**
* rollDie - This function calls the die roll function of the die and handles the output.
* @return - bool - Whether or not the die roll was in m_passNums[]
*/
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

/**
* getNumPlayers - this function returns the number of players
* @return - int - the number of players
*/
int GameFunc::getNumPlayers(){
	return m_numPlayers;
}

/**
* getPlayerChoice - this function allows the player to continue rolling
* or to hold at their current roll
* @return - bool - 
*/
bool GameFunc::getPlayerChoice(){
	cout << "Roll or Hold (r/h): \n";
	string input;
	cin >> input;
	if(input == r)
		return true;
	return false;

}

/**
* resetScore - this function resets the score if the player wishes to continue playing
*/
bool GameFunc::resetScore(){
	for(i=0; i<m_numPlayers;i++);
		m_pVec[score = 0;
}

/**
*	changeDifficulty - Called from within the additionalOptions() function, changes AI difficulty level
*/
void GameFunc::changeDifficulty(int i){
	for(int i=0;i<m_numPlayers;i++)
		if(m_pVec[i].type == 1)
		//Change difficulty of all computer players
	}
}

/**
*	updateHoldScore - adds m_holdPoints to the current player's score
*/ 
void GameFunc::updateHoldScore(){
	m_pVec[m_curPlayerIndex].score += m_holdPoints;
	m_holdPoints = 0;
}

/**
*	changeTurn - changes the player turn to the next player in m_pVec
*/
void GameFunc::changeTurn(){
	if(m_curPlayerIndex == (m_pVec.size()-1))
		m_curPlayerIndex = 0;
	else
		m_curPlayerIndex++;
}

/**
*	checkWinner - checks if the current player has scored > m_endScore
*/
bool GameFunc::checkWinner(){
	if (m_pVec[m_curPlayerIndex].getPoints >= m_endScore)
		gameEnd();
}

/**
*	addNumToPassNums - called from additionalOptions function to add numbers to pass
*/
void GameFunc::addNumToPassNums(){
	//add nums to pass to m_passNums
}

/**
*	setEndScore - changes the m_endScore of the game
*/
void GameFunc::setEndScore(int i){
	m_endScore = i;
}

/**
*	addPlayer - adds a player to m_pVec
	@param - string - playerName - the name of the player to be added
*/
void GameFunc::addPlayer(string playerName){
	Player p = new Player(playerName);
	m_pVec.push(p);
}