#include "Carti_copii.h"

#include <utility>

void Carti_copii::afisare() {
    Carte::afisare();
    std::cout<<nume<<" "<<autor<<" ";
}

void Carti_copii::reducere() {
    pret=pret-30*pret/100;
    std::cout<<pret<<'\n';
}
Carti_copii::Carti_copii(std::string tip_,const std::string &nume_, const std::string &autor_, const std::string &genre_, int nr_pag_,
                             float pret_)
        : Carte(nume_, autor_, genre_, nr_pag_, pret_) , tip{std::move(tip_)} {}