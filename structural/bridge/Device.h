#pragma once
#include <iostream>
using namespace std;
class Device {
    protected:
        bool state;
        int volume;
        int channel;
    public:
        virtual bool isEnabled() = 0;
        virtual void enable() = 0;
        virtual void disable() = 0;
        virtual int getVolume() = 0;
        virtual void setVolume(int volume) = 0;
        virtual int getChannel() = 0;
        virtual void setChannel(int channel) = 0;
};
