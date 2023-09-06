#include "Handler.h"

class Handler1 : public Handler
{
    public:
        bool handle(request r) override {
            std::cout << "Handler1 handles..." << r << std::endl;
            bool result = (r == "hehe");
            if (!result)
                return false;
            else if (next != nullptr)
                return next->handle(r);
            else 
                return true;
        }
};