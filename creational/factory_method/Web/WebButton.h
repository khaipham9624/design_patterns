#pragma once
#include "Button.h"

class WebButton : public Button
{
private:
    /* data */
public:
    string onClick() override;
    WebButton() = default;
    ~WebButton() = default;
};

