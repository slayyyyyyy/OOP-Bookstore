
#include "Carti_joc.h"

void Carti_joc::reducere() {

    pret=pret-55*pret/100;
    std::cout<<pret<<'\n';
}

Carti_joc::Carti_joc(const std::string &nume_, const std::string &autor_, const std::string &genre_, int nr_pag_,
                     float pret_) : Carte(nume_, autor_, genre_, nr_pag_, pret_) {}

