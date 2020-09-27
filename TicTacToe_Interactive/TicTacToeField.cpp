#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "TicTacToeField.h" 

using namespace std;

TicTacToeField::TicTacToeField() {

    field = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    cout << "Constructor wird aufgerufen, wenn die Klasse erstellt wird" << endl;
}

TicTacToeField::TicTacToeField(vector<vector<int>> field) {
    this->field = field;
    cout << "Ich werde aufgerufen wenn der erste Constructor ueberladen wird" << endl;
}

int TicTacToeField::calc_winner() {
    for (int i = 0; i <= 2; i++) {
        if (field.at(i).at(0) != 0 && field.at(i).at(0) == field.at(i).at(1) && field.at(i).at(0) == field.at(i).at(2)) {
            return field.at(i).at(0);
        }
    }
    for (int i = 0; i <= 2; i++) {
        if (field.at(0).at(i) != 0 && field.at(0).at(i) == field.at(1).at(i) && field.at(0).at(i) == field.at(2).at(i)) {
            return field.at(0).at(i);
        }
    }
    if (field.at(0).at(0) != 0 && field.at(0).at(0) == field.at(1).at(1) && field.at(0).at(0) == field.at(2).at(2)) {
        return field.at(0).at(0);
    }
    if (field.at(0).at(2) != 0 && field.at(0).at(2) == field.at(1).at(1) && field.at(2).at(2) == field.at(0).at(0)) {
        return field.at(0).at(2);
    }
    return 0;
}
/*
void printField() {
    for (const auto &row : field) {
        cout << " | ";
        for (const auto &element : row) {
            cout << element << " | ";
        }
        cout << endl;
    }

//vereinfachte version von der spielfeld ausgabe
//cout << row.at(0) << " | " << row.at(1) << " | " << row.at(2) << endl;
}
*/
//Stringstream verwenden um das cout "zwischen zu speichern"
string TicTacToeField::getFieldstr() {
    stringstream result;

    for (const auto& row : field) {
        result << " | ";
        for (const auto& element : row) {
            result << element << " | ";
        }
        result << endl;
    }
    return result.str();
}


