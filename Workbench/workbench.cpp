#include "workbench.h"

#include <iostream>

Workbench::Workbench(QWidget *parent) : QWidget(parent)
{
    std::clog << "workbench" << std::endl;
}
