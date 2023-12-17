#pragma once
#include "Notifier.h"

class FacebookNotifier : public Notifier {
    public:
        void send() override {
            std::cout << "Facebook notifier send..." << std::endl;
        }
};