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
		int getPlayerChoice();
		bool setName(string name);
		bool resetScore();
		bool changeDifficulty(int i);
		int rollDie();
		int getNumPlayers();
	private:
		int m_holdPoints = 0;
		int m_numPlayers = 1;
		int m_numCompPlayers = 1;
		vector<int> m_passNums = {1}; //incase mroe pass numbers than 1
		vector<Player> m_pVec;
		int m_curPlayerIndex;
		int m_endScore = 100;
		int m_maxDifficultyLevels = 4;
		int m_numSides = 6;
		Dice d;

		//Could be implemented into a vector for multiple user names.
		string m_playerName; 

		void additionalOptions();
		void updateHoldScore(Player p);
		bool changeTurn();
		bool checkWinner(Player p);
};
#endif