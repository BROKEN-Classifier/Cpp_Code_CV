#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QString>
#include <QVector>
#include <stdlib.h>
#include <time.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    virtual void keyPressEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;

    QVector<QString> words = {"CPLUSPLUS", "HANGMAN", "SOMMER", "FAHRRAD", "PROGRAMMIEREN"};
    QString toGuess = randomWordGenerator();
    QVector<QString> keystroke;
    QString randomWordGenerator();

    void refreshWord();
    void refreshNmberOfFailures();



    int getNumberOfFailures();


};
#endif // MAINWINDOW_H
