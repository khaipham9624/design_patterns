#include "Context.h"

int main(){
    Strategy *strategy1 = new Strategy1();
    Strategy *strategy2 = new Strategy2();
    Context *context = new Context();
    context->setStrategy(strategy1);
    context->doSomething();
    context->setStrategy(strategy2);
    context->doSomething();
}