#pragma once
#include "TextBox.h"

class WebTextBox : public TextBox
{
private:
    /* data */
public:
    WebTextBox() = default;
    ~WebTextBox() = default;
    string align() override;
};
