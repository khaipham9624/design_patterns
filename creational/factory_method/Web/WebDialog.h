#pragma once
#include "Dialog.h"

class WebDialog : public Dialog
{
private:
    /* data */
public:
    WebDialog(/* args */) = default;
    ~WebDialog() = default;
    Button* createButton();
    TextBox* createTextBox();
};
