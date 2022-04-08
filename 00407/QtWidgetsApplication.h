#pragma once

#include <QtWidgets/QDialog>
#include "ui_QtWidgetsApplication.h"

class QtWidgetsApplication : public QDialog
{
    Q_OBJECT

public:
    QtWidgetsApplication(QWidget *parent = Q_NULLPTR);

public:
    
    void TestSomeThing();

private:
    Ui::QtWidgetsApplicationClass ui;
};
