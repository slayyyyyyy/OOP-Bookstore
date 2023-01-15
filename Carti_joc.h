
#ifndef OOP_CARTI_JOC_H
#define OOP_CARTI_JOC_H
#include "Carte.h"


class Carti_joc: public Carte {
    Carti_joc(const std::string& nume_,const std::string& autor_, const std::string& genre_, int nr_pag_, float pret_);
    Carti_joc(const Carti_joc& other);
    void reducere() override;

};


#endif //OOP_CARTI_JOC_H
