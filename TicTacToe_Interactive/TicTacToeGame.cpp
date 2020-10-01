<<<<<<< HEAD
#include <iostream>
#include <string>
#include <sstream>

#include "TicTacToeGame.h"


using namespace std;

TicTacToeGame::TicTacToeGame(string player1, string player2){
	this->player1 = player1;
	this->player2 = player2;
	

	cout << "Der TicTacToeGame Constructor wird aufgerufen!" << endl;

}
void TicTacToeGame::play(int row, int col) {
    if (row < 0 || row >= field.size()) {
        return;
    }
    if (col < 0 || col >= field[row].size()) {
        return;
    }
    if (field[row][col] != 0) {
        return;
    }
    
    field[row][col] = currentplayer;

    if (currentplayer == 1) {
        currentplayer = 2;
    }
    else {
        currentplayer = 1;
    }
}

bool TicTacToeGame::isFinished() {
    int winner = calculateWinner();
    if (winner != 0) {
        return true;
    }

    for (const auto &row : field) {
        for (const int &value : row) {
            if (value == 0) {
                return false;
            }
        }
    }
    return true;
}

string TicTacToeGame::getCurrentPlayer() {
    if (currentplayer == 1) {
        return player1;
    }
    else {
        return player2;
    }

}

string TicTacToeGame::getWinner() {
    if (isFinished()) {
        int winner = calculateWinner();
        if (winner == 0) {
            return "Das spielt geht unendschieden aus!";
        }
        else if (winner == 1) {
            return player1;
        }
        else {
            return player2;
        }
    }
    return "";
}

string TicTacToeGame::getFieldstr() {
    stringstream result;

    result << "Player 1 = " << player1 << endl;
    result << "Player 2 = " << player2 << endl;
    
    result << TicTacToeField::getFieldstr() << endl;

    return result.str();

=======
#include <iostream>
#include <string>
#include <sstream>

#include "TicTacToeGame.h"


using namespace std;

TicTacToeGame::TicTacToeGame(string player1, string player2){
	this->player1 = player1;
	this->player2 = player2;
	

	cout << "Der TicTacToeGame Constructor wird aufgerufen!" << endl;

}
void TicTacToeGame::play(int row, int col) {
    if (row < 0 || row >= field.size()) {
        return;
    }
    if (col < 0 || col >= field[row].size()) {
        return;
    }
    if (field[row][col] != 0) {
        return;
    }
    
    field[row][col] = currentplayer;

    if (currentplayer == 1) {
        currentplayer = 2;
    }
    else {
        currentplayer = 1;
    }
}

bool TicTacToeGame::isFinished() {
    int winner = calc_winner();
    if (winner != 0) {
        return true;
    }

    for (const auto &row : field) {
        for (const int &value : row) {
            if (value == 0) {
                return false;
            }
        }
    }
    return true;
}

string TicTacToeGame::getCurrentPlayer() {
    if (currentplayer == 1) {
        return player1;
    }
    else {
        return player2;
    }

}

string TicTacToeGame::getWinner() {
    if (isFinished()) {
        int winner = calc_winner();
        if (winner == 0) {
            return "Das spielt geht unendschieden aus!";
        }
        else if (winner == 1) {
            return player1;
        }
        else {
            return player2;
        }
    }
    return "";
}

string TicTacToeGame::getFieldstr() {
    stringstream result;

    result << "Player 1 = " << player1 << endl;
    result << "Player 2 = " << player2 << endl;
    
    result << TicTacToeField::getFieldstr() << endl;

    return result.str();

>>>>>>> 0cbd34bede97bc5f76feb813254d0115423d4e55
}