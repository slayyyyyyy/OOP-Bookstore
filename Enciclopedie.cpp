#include "Enciclopedie.h"

void Enciclopedie::reducere() {
    float y=x.getpret()-10*x.getpret()/100;
    x.setpret(y);
    std::cout<<x.getpret()<<'\n';
}
