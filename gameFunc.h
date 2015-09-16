/**
* Game Functions header class
* @author Thibaut Hardin
*/

#ifndef GAME_FUNCTIONS
#define GAME_FUNCTIONS

#include "player.h"
#include "die.h"

using std::string;
using std::vector;

class GameFunc{
	public:
		void startMessage();
		void beginGame();
		void resetScore();
		int getPlayerChoice();
		int getNumPlayers();
		bool rollDie();
	private:
		int m_holdPoints = 0;
		int m_numPlayers = 2; //total number of players
		int m_numCompPlayers = 1; //number of computer players
		int m_curPlayerIndex;
		int m_endScore = 100;
		int m_maxDifficultyLevels = 4;
		int m_numSides = 6;
		vector<Player> m_pVec; //vector of players
		vector<int> m_passNums = {1}; //incase mroe pass numbers than 1
		
		Dice d;

		//Could be implemented into a vector for multiple user names.
		string m_playerName; 

		void changeDifficulty(int i);
		void additionalOptions();
		void updateHoldScore();
		void changeTurn();
		void addNumToPassNums();
		bool checkWinner();

};
#endif