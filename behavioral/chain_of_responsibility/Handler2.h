#include "Handler.h"

class Handler2 : public Handler
{
    public:
        bool handle(request r) override {
            std::cout << "Handler2 handles..." << r << std::endl;
            bool result = (r == "haha");
            if (!result)
                return false;
            else if (next != nullptr)
                return next->handle(r);
            else 
                return true;
        }
};