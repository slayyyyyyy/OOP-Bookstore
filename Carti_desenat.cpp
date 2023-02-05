#include "Carti_desenat.h"

void Carti_desenat::reducere() {
    pret=pret-25*pret/100;
    std::cout<<pret<<'\n';
}

Carti_desenat::Carti_desenat(const std::string &nume_, const std::string &autor_, const std::string &genre_, int nr_pag_,
                     float pret_)
        : Carte(nume_, autor_, genre_, nr_pag_, pret_) {}




