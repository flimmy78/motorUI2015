#ifndef MOTORUI2015_H
#define MOTORUI2015_H

#include <QtCore/QtGlobal>
#include <QMainWindow>
#include "settingdialog.h"
#include <QtSerialPort/QSerialPort>

namespace Ui {
class motorUI2015;
}

class motorUI2015 : public QMainWindow
{
    Q_OBJECT

public:
    explicit motorUI2015(QWidget *parent = 0);
    ~motorUI2015();


private:
    Ui::motorUI2015 *ui;
    settingDialog *settings;
    QSerialPort *myserial;
};

#endif // MOTORUI2015_H
