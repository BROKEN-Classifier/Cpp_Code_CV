<<<<<<< HEAD
#pragma once

#include <iostream>
#include <string>

#include "TicTacToeField.h"

class TicTacToeGame : public TicTacToeField {
private: 
	std::string player1;
	std::string player2;
	
	int currentplayer = 1;

public:
	TicTacToeGame(std::string player1, std::string player2);
	void play(int row, int col);
	bool isFinished();
	
	std::string getCurrentPlayer();
	std::string getFieldstr();
	std::string getWinner();
};
=======
#pragma once

#include <iostream>
#include <string>

#include "TicTacToeField.h"

class TicTacToeGame : public TicTacToeField {
private: 
	std::string player1;
	std::string player2;
	
	int currentplayer = 1;

public:
	TicTacToeGame(std::string player1, std::string player2);
	void play(int row, int col);
	bool isFinished();
	
	std::string getCurrentPlayer();
	std::string getFieldstr();
	std::string getWinner();
};
>>>>>>> 0cbd34bede97bc5f76feb813254d0115423d4e55
