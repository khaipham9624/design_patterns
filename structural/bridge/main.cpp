#include "Remote.h"
# include "TV.h"

int main(){
    Device *device = new TV();
    Remote *r = new Remote(device);
    r->togglePower();
    r->togglePower();
}