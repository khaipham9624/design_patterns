#include "Service1.h"
#include "Service2Adapter1.h"
#include "Service2Adapter2.h"

int main (){
    ClientInterface *clientInterface = new Service1();
    clientInterface->method("hello");
    delete clientInterface;
    clientInterface = new Service2Adapter1();
    clientInterface->method("hello");
    delete clientInterface;
    clientInterface = new Service2Adapter2();
    clientInterface->method("hello");
    delete clientInterface;
}