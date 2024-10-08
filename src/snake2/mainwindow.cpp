#include "mainwindow.h"
//#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)

{
    setFixedSize(320, 370);
    m_gameField = new GameField();
    m_helpField = new HelpField();
    connect(m_gameField, &GameField::ChangeTextSignals, m_helpField, &HelpField::ChangeTextSlot);
    m_centralWidget = new QWidget();
    m_gridLayout = new QGridLayout();
    m_gridLayout->addWidget(m_gameField, 0, 0);
    m_gridLayout->addWidget(m_helpField, 1, 0);
    m_centralWidget->setLayout(m_gridLayout);
    setCentralWidget(m_centralWidget);
}

MainWindow::~MainWindow()
{
    //delete ui;
}
