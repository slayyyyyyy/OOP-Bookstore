#include "Carti_copii.h"

void Carti_copii::afisare() {
    Carte::afisare();
    std::cout<<nume<<" "<<autor<<" ";
}

void Carti_copii::reducere() {
    float y=x.getpret()-30*x.getpret()/100;
    x.setpret(y);
    std::cout<<x.getpret()<<'\n';
}
