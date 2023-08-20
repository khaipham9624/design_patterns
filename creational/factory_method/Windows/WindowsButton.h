#pragma once
#include "Button.h"

class WindowsButton : public Button
{
private:
    /* data */
public:
    string onClick() override;
    WindowsButton() = default;
    ~WindowsButton() = default;
};

