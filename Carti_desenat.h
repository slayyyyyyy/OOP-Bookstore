
#ifndef OOP_CARTI_DESENAT_H
#define OOP_CARTI_DESENAT_H
#include <utility>

#include "Carte.h"


class Carti_desenat: public Carte {
public:
    Carti_desenat(const std::string& nume_,const std::string& autor_, const std::string& genre_, int nr_pag_, float pret_);

    void reducere() override;
};


#endif //OOP_CARTI_DESENAT_H
