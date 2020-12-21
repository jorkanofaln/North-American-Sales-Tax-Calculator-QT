#include "mainwindow.h"
#include "./ui_mainwindow.h"
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
void MainWindow::clearFields(){
    //Clearing fields
    ui->txtAmount->clear();
    ui->resultView->clear();
    //Reset combobox
    ui->territorySelectCombo->setCurrentIndex(0);
}
void MainWindow::aboutThisApp(){
    QMessageBox::about(this,"About this app","A rewrite of the north american sales tax calculator in C++ using the QT5 graphics framework\n"
                       "Copyright (c) 2020, Jorkano Faln\n"
                       "THIS SOFTWARE IS PROVIDED AS IS WITHOUT ANY EXPRESS OR IMPLIED WARRANTIES");
}
void MainWindow::aboutLicense(){
    QMessageBox::about(this,"License Information", "BSD 3-Clause License\n"

                       "Copyright (c) 2020, Jorkano Faln\n"
                       "All rights reserved."
                       "Redistribution and use in source and binary forms, with or without"
                       "  modification, are permitted provided that the following conditions are met:\n"

                       "\n1. Redistributions of source code must retain the above copyright notice, this"
                       "   list of conditions and the following disclaimer.\n"

                       "\n2. Redistributions in binary form must reproduce the above copyright notice,"
                          "this list of conditions and the following disclaimer in the documentation"
                          "and/or other materials provided with the distribution.\n"

                       "\n3. Neither the name of the copyright holder nor the names of its"
                         " contributors may be used to endorse or promote products derived from"
                        "  this software without specific prior written permission.\n"

                       "\nTHIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 'AS IS'"
                       "AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE"
                       "IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE"
                       "DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE"
                       "FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL"
                       "DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR"
                       "SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER"
                       "CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,"
                       "OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE"
                       "OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."

);
}
void MainWindow::calculateSalesTax(){
     //Get values from comboboxand textEdit
     double amount;
     std::string str_amount = ui->txtAmount->text().toStdString();
     std::string territory = ui->territorySelectCombo->currentText().toStdString();
     if(!str_amount.empty()){
         amount = std::stod(str_amount);
         //Initializing taxCalculator
         taxCalculator tax(amount,territory);
         double priceWithTaxes = tax.calculateSalesTax();
         //Converting and Displaying result
         std::ostringstream streamTaxes;
         streamTaxes << priceWithTaxes;
         std::string str_priceWithTaxes = streamTaxes.str();
         ui->resultView->setText(QString::fromStdString(str_priceWithTaxes));
     }
}
