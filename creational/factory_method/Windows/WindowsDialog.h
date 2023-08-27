#pragma once
#include "Dialog.h"

class WindowsDialog : public Dialog
{
private:
    /* data */
public:
    WindowsDialog(/* args */) = default;
    ~WindowsDialog() = default;
    Button* createButton();
    TextBox* createTextBox();
};
