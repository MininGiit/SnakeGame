#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include "game.h"
#include "helpfield.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    GameField *m_gameField;
    HelpField *m_helpField;
    QWidget *m_centralWidget;
    QGridLayout *m_gridLayout;

};
#endif // MAINWINDOW_H
