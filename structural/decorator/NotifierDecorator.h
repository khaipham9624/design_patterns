#include "Notifier.h"

class NotifierDecorator : public Notifier {
    public:
        void setNotifier(Notifier *notifier){
            this->notifier = notifier;
        }

        void send() override {
            std::cout << "Decorator..." << std::endl;
            if (notifier != nullptr)
                notifier->send();
        }
    private:
        Notifier *notifier;
};