#pragma once
#include "Button.h"
#include "TextBox.h"
class Dialog
{
private:
    /* data */
public:
    virtual Button* createButton() = 0;
    virtual TextBox* createTextBox() = 0;
    virtual ~Dialog(){};
};
