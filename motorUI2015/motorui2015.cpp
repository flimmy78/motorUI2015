#include "motorui2015.h"
#include "ui_motorui2015.h"
#include "settingdialog.h"

motorUI2015::motorUI2015(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::motorUI2015)
{
    ui->setupUi(this);
    myserial = new QSerialPort;
    settings = new settingDialog;
    ui->actionSetting->setEnabled(true);
    connect(ui->actionSetting,SIGNAL(triggered()),settings,SLOT(show()));
}

motorUI2015::~motorUI2015()
{
    delete ui;
}
