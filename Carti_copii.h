#ifndef OOP_CARTI_COPII_H
#define OOP_CARTI_COPII_H
#include "Carte.h"


class Carti_copii : public Carte {
    std::string tip;
    Carti_copii(std::string  tip_, const std::string& nume_,const std::string& autor_, const std::string& genre_, int nr_pag_, float pret_);
    Carti_copii(const Carti_copii& other);
    void afisare() override;
    void reducere() override;
};


#endif //OOP_CARTI_COPII_H
