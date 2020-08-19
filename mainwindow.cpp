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
void MainWindow::exitSlot(){
    MainWindow::close();
}
void MainWindow::calculateSalesTax(){

     //Get values from comboboxand textEdit
     double amount;
     std::string str_amount = ui->txtAmount->text().toStdString();
     if(str_amount != ""){
         amount = std::stod(str_amount);
     }
     else{
         amount = 0.0;
     }
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
