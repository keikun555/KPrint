#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
#include <QStringList>
#include "kprint.h"
#include "ui_kprint.h"
using namespace std;

kprint::kprint(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kprint)
{
    ui->setupUi(this);
    connect(ui->printButton, SIGNAL(clicked()), this, SLOT(printToPrinter()));
    getPrinterQStringList();
    ui->printerList->addItems(printerQStringList);

}

void kprint::getPrinterQStringList() {
    FILE *in;
    queue<string> temporaryStringQueue;
    char buff[512];

    if(!(in = popen("lpc status", "r"))){
        throw runtime_error("kprint::getprinterQStringList() cannot find printers via 'lpc status'");
    }
    while(fgets(buff, sizeof(buff), in)!=NULL){
        //printerQStringList.push(buff);
        string tempStr(buff);
        temporaryStringQueue.push(tempStr.substr(0,tempStr.length() - 2));
    }
    while(!temporaryStringQueue.empty()) {
        printerQStringList.append(QString::fromStdString(temporaryStringQueue.front()));
        temporaryStringQueue.pop();
        for(int i = 0; i < 5; i++) {
            temporaryStringQueue.pop();
        }
    }
    pclose(in);
}

void kprint::printToPrinter() {
    string command = "lpr -P ";
    int copies = ui->copies->value();
    QList<QListWidgetItem *> selectedPrinters = ui->printerList->selectedItems();
    for(QListWidgetItem * printer : selectedPrinters) {
        command = command + printer->text().toStdString() + " " + "-#" + to_string(copies) + " " + filePath;
        //cout << command << endl;//change this to system(command);
        system(command.c_str());
        command = "lpr -P ";
    }
    exit(0);
}

kprint::~kprint()
{
    delete ui;
}
