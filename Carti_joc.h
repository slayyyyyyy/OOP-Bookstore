
#ifndef OOP_CARTI_JOC_H
#define OOP_CARTI_JOC_H
#include "Carte.h"


class Carti_joc: public Carte {
public:
    Carte x;
    void reducere() override;

};


#endif //OOP_CARTI_JOC_H
