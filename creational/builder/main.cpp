#include "Director.h"
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"

int main(){
    Builder* builder = new ConcreteBuilder1();

    Director *direct = new Director(builder);

    direct->make();
    delete builder;
    builder = new ConcreteBuilder2();
    direct->changeBuilder(builder);
    direct->make();
}