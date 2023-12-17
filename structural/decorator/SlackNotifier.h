#pragma once
#include "Notifier.h"

class SlackNotifier : public Notifier {
    public:
        void send() override {
            std::cout << "Slack notifier send..." << std::endl;
        }
};