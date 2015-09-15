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
		int getPlayerChoice(Player p);
		bool setName(string name, Player p);
		bool resetScore();
		bool changeDifficulty(int i);
		int rollDie(Die d, Player p);
		int getNumPlayers();
	private:
		int m_holdPoints = 0;
		int m_numPlayers = 0;
		int m_numCompPlayers = 0;
		vector<int> m_passNums = {1};
		vector<Player> m_pVec;
		int m_curPlayerNum;
		int m_endScore = 100;
		int m_maxDifficultyLevels = 4;
		int m_
		void updateHoldScore(Player p);
		bool changeTurn();
		bool checkWinner(Player p);
};
#endif