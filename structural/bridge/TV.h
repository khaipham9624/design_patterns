#pragma once
#include "Device.h"

class TV : public Device{
    public:
        bool isEnabled() override {
            return state;
        }
        void enable() override{
            if (!isEnabled())
                state = true;
        }

        void disable() override {
            if (isEnabled())
                state = false;
        }

        int getVolume() override{
            return volume;
        }
        void setVolume(int volume) override{
            this->volume = volume;
        }
        int getChannel() override{
            return channel;
        }
        void setChannel(int channel) override{
            this->channel = channel;
        }
};