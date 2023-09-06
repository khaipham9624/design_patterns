#include "Handler.h"

class Handler1 : public Handler
{
    public:
        bool handle() override {
            std::cout << "Handler1 handles..." << std::endl;
            bool result = true;
            if (!result)
                return false;
            else if (next != nullptr)
                return next->handle();
            else 
                return true;
        }
};