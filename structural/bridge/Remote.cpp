#include "Remote.h"

    Remote::Remote(Device *device){
        this->device = device;
    }

    Remote::~Remote(){
        delete this->device;
    }

    void Remote::togglePower(){
        if (device->isEnabled()){
            device->disable();
        } else {
            device->enable();
        }
    }
    void Remote::volumeDown(){}
    void Remote::volumeUp(){}
    void Remote::channelDown(){}
    void Remote::channelUp(){}