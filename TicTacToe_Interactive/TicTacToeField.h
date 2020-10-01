<<<<<<< HEAD
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

    int calculateWinner();

    std::string getFieldstr();

=======
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

>>>>>>> 0cbd34bede97bc5f76feb813254d0115423d4e55
};