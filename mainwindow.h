#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <sstream>
#include<iostream>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void calculateSalesTax();
    void exitSlot();
    void clearFields();
    void aboutThisApp();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
