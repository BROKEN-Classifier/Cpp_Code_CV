#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>
#include <iostream>
#include <QKeyEvent>
#include <stdlib.h>
#include <time.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    refreshWord();
    refreshNmberOfFailures();

}
void MainWindow::keyPressEvent(QKeyEvent *event) {
    int numberOfFailures = getNumberOfFailures();
    if (numberOfFailures == 11) {
        return;
    }

    QString input = event->text().toUpper();
    if (!input.isEmpty()) {
        keystroke.append(input);
        refreshWord();
        refreshNmberOfFailures();
        std::cout << "Taste wurde gedruckt: " << input.toStdString() << std::endl;
    }
}

QString MainWindow::randomWordGenerator() {
    srand(time(NULL));
    int random_number = rand() % words.size();

    return words[random_number];
}

int MainWindow::getNumberOfFailures() {
    int numberOfFailures = 0;
    for (QString key :keystroke) {
        if (!toGuess.contains(key.at(0))) {
            numberOfFailures++;
        }
    }
    return numberOfFailures;
}

void MainWindow::refreshNmberOfFailures() {
    int numberOfFailures = getNumberOfFailures();
    ui->number_of_mistakes->setText(QString::number(numberOfFailures));

    //Galgen aktuallisieren
    QVector<QString> images = {
        ":/backgrounds/Unbenannt0.png",
        ":/backgrounds/Unbenannt1.png",
        ":/backgrounds/Unbenannt2.png",
        ":/backgrounds/Unbenannt3.png",
        ":/backgrounds/Unbenannt4.png",
        ":/backgrounds/Unbenannt5.png",
        ":/backgrounds/Unbenannt6.png",
        ":/backgrounds/Unbenannt7.png",
        ":/backgrounds/Unbenannt8.png",
        ":/backgrounds/Unbenannt9.png",
        ":/backgrounds/Unbenannt10.png",
        ":/backgrounds/Unbenannt11.png",
    };
    ui->background->setPixmap(QPixmap(images.at(numberOfFailures)));
}

void MainWindow::refreshWord() {
    int numberOfFailures = getNumberOfFailures();

    QString output = "";
    for (int i = 0; i < toGuess.length(); i++) {
        if (i != 0) {
            output+=" ";
        }

        if (numberOfFailures == 11 || keystroke.contains(QString(toGuess[i]))){
            output+=toGuess[i];
        }
        else {
            output +="_";
        }

    }
    ui->word->setText(output);
}

MainWindow::~MainWindow()
{
    delete ui;
}

