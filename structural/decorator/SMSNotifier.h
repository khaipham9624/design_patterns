#pragma once
#include "Notifier.h"

class SMSNotifier : public Notifier {
    public:
        void send() override {
            std::cout << "SMS notifier send..." << std::endl;
        }
};
