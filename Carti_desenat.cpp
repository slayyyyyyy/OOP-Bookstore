#include "Carti_desenat.h"

void Carti_desenat::reducere() {

    float y=x.getpret()-25*x.getpret()/100;
    x.setpret(y);
    std::cout<<x.getpret()<<'\n';
}
