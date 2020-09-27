#include <iostream>
#include <string>
#include <vector>

#include "TicTacToeField.h"
#include "TicTacToeGame.h"

using namespace std;

int main(int argc, const char* argv[]) {
	TicTacToeGame g("Max", "Mustemann");
	cout << g.getFieldstr() << endl;
	while (!g.isFinished() == 1) {
		cout << g.getCurrentPlayer() << " ist am Zug."<< endl;
		cout << "Gib eine Position ein: " << endl;
		int row, col;

		cin >> row >> col;
		g.play(row, col);
		cout << g.getFieldstr() << endl;
	}

	
	cout << "Der Sieger ist: " << g.getWinner() << "!" <<endl;
}
