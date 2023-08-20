#pragma once
#include "TextBox.h"

class MacOsTextBox : public TextBox
{
private:
    /* data */
public:
    MacOsTextBox() = default;
    ~MacOsTextBox() = default;
    string align() override;
};
