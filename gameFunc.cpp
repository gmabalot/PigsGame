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

/*
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

/*
 * beginGame - this function begins the game
 */
void GameFunc::beginGame(){
	//Select random player to start.

	m_pVec.push()
	srand(time(NULL)); //Initialize random seed.
	int firstPlayer = rand() * m_pVec.size();

}


/*
 * gameEnd - this function ends the game
 */
void GameFunc::gameEnd(){
}


/*
 * getNumPlayers - this function returns the number of players
 * @return - int - the number of players
 */
int GameFunc::getNumPlayers(){
	return m_numPlayers;
}


/*
 * getPlayerChoice - this function allows the player to continue rolling
 * or to hold at their current roll
 * @param - Player p - the player making the choice
 * @return - bool - 
 */
bool GameFunc::getPlayerChoice(Player p){
	int i = p.getChoice(); //return 0 or 1 for hold/roll
	if(i == 1)
		rollDie(d, p); //Need to create a dice object here
	else{
		updateScore(p);
		changeTurn(vector<Player>* p);//change
	}
}


/*
 * setName - this function sets the players name
 * @return - bool -
 */
bool GameFunc::setName(string name, Player p){
	//Call player.setName and handle errors
	p.setName(name);
}

/*
 * resetScore - this function resets the score
 * @return - bool -
 */
bool GameFunc::resetScore(){
	for(Player curPlayer : pVec)
		curPlayer.score = 0;
}

/*
 * changeDiffiiculty - this function changes the AI difficulty
 * @param - int i - integer to describe difficulty level
 * @return - bool -
 */
bool GameFunc::changeDifficulty(int i){
	//Potentially move this const;
	for( Player curPlayer : pVec)
		if(curPlayer.difficulty >=0 && i>0 && i<m_maxDifficultyLevels) //-1 indicates human player
			curPlayer.difficulty = i;
	}
}

/*
 * rollDie - this function rolls the dice for the player
 * @param - Die - the die that is being rolled
 * @return - int
 */
int GameFunc::rollDie(Die d){
	int dieNum = d.roll;
	for(int i : m_passNums)
		if(i == dieNum)
			holdPoints = 0; //reset temp pts if 
	}
	if(holdPoints==0)
		if(!changeTurn)
			//console.log("Error changing turn.");

/*
 * updateHoldScore - this function updates the score being held and
 * checks to see if the plaer has won
 * @param - Player - the current player whose score is being updated 
 */
void GameFunc::updateHoldScore(Player p){
	p.score += holdPoints;
	holdPoints = 0;
	checkWinner(p);
}

/*
 *
 *
 *
 *
 */
bool GameFunc::changeTurn(){
	
}

/*
 * checkWinner - checks if score is high enough to win
 *
 */
bool GameFunc::checkWinner(){
	if (p.getPoints >= m_endScore)
		gameEnd();
}

/*
 *
 *
 *
 */
void GameFunc::addNumToPassNums(vector<int> nums){
	for(int i : nums)
		m_passNums.push(i);
}

/*
 * setEndScore - sets the toatal amount of points needed to win
 * @param - int - the goal/winning number to use
 */
void GameFunc::setEndScore(int i){
	m_endScore = i;
}

/*
 * addPlayer - adds an individual player to the game
 * @param - string - the name of the player
 * @param - int - if the player is human or AI
 */
void GameFunc::addPlayer(string playerName, int playerType){
	if(playerType == 0)
		Player p = new Player(player);
	else


}



/*
 * addPlayers - adds players to the game
 */
void GameFunc::addPlayers(){

}
