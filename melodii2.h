#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_melodii2.h"

class melodii2 : public QMainWindow
{
    Q_OBJECT

public:
    melodii2(QWidget *parent = nullptr);
    ~melodii2();

private:
    Ui::melodii2Class ui;
};
