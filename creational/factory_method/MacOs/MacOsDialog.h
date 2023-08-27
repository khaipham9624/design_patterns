#pragma once
#include "Dialog.h"

class MacOsDialog : public Dialog
{
private:
    /* data */
public:
    MacOsDialog(/* args */) = default;
    ~MacOsDialog() = default;
    Button* createButton();
    TextBox* createTextBox();
};
