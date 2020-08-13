#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <sstream>
#include<iostream>
#include "taxCalculator.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::calculateSalesTax(){

     //Get values from comboboxand textEdit
     std::string str_amount = ui->txtAmount->text().toStdString();
     double amount = std::stod(str_amount);
     std::string territory = ui->territorySelectCombo->currentText().toStdString();
    //Initializing taxCalculator
     taxCalculator tax(amount,territory);
     double priceWithTaxes = tax.calculateSalesTax();
     //Converting and Displaying result
     std::ostringstream strs;
     strs << priceWithTaxes;
     std::string str_priceWithTaxes = strs.str();
     ui->resultView->setText(QString::fromStdString(str_priceWithTaxes));
}
