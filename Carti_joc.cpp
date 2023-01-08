
#include "Carti_joc.h"

void Carti_joc::reducere() {

    float y=x.getpret()-55*x.getpret()/100;
    x.setpret(y);
    std::cout<<x.getpret()<<'\n';
}
