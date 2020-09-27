#pragma once

#include <string>
#include <vector>
#include <sstream>

class TicTacToeField {
protected:
    std::vector<std::vector<int>> field;

public:
    TicTacToeField();
    TicTacToeField(std::vector<std::vector<int>> field);

    int calc_winner();

    std::string getFieldstr();

};