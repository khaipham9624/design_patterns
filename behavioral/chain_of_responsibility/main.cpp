#include "Handler1.h"
#include "Handler2.h"


int main(){
    Handler* handler1 = new Handler1();
    Handler* handler2 = new Handler2();
    handler1->setNextHandler(handler2);
    handler1->handle();
}
