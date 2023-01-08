#ifndef OOP_CARTI_COPII_H
#define OOP_CARTI_COPII_H
#include "Carte.h"


class Carti_copii : public Carte {
public:
    Carte x;
    void afisare() override;
    void reducere() override;
};


#endif //OOP_CARTI_COPII_H
