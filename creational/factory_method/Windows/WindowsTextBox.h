#pragma once
#include "TextBox.h"

class WindowsTextBox : public TextBox
{
private:
    /* data */
public:
    WindowsTextBox() = default;
    ~WindowsTextBox() = default;
    string align() override;
};
