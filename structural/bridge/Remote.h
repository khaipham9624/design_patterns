#pragma once
#include "Device.h"

class Remote
{
private:
    /* data */
protected:
    Device *device;
public:
    Remote(Device *device);
    ~Remote();

    void togglePower();
    void volumeDown();
    void volumeUp();
    void channelDown();
    void channelUp();
};