
#ifndef OOP_CARTI_DESENAT_H
#define OOP_CARTI_DESENAT_H
#include "Carte.h"


class Carti_desenat: public Carte {
public:
    Carti_desenat(const std::string& nume_,const std::string& autor_, const std::string& genre_, int nr_pag_, float pret_);
    Carti_desenat(const Carte &other1, const Carti_desenat &other);
    void reducere() override;
};


#endif //OOP_CARTI_DESENAT_H
