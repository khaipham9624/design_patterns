#include "Handler.h"

class Handler2 : public Handler
{
    public:
        bool handle() override {
            std::cout << "Handler2 handles..." << std::endl;
            bool result = true;
            if (!result)
                return false;
            else if (next != nullptr)
                return next->handle();
            else 
                return true;
        }
};