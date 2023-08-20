#pragma once
#include "Button.h"

class MacOsButton : public Button
{
private:
    /* data */
public:
    string onClick() override;
    MacOsButton() = default;
    ~MacOsButton() = default;
};

