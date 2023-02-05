#include "Enciclopedie.h"

#include <utility>

void Enciclopedie::reducere() {
    pret=pret-10*pret/100;
    std::cout<<pret<<'\n';
}

Enciclopedie::Enciclopedie(const std::string &nume_, const std::string &autor_, const std::string &genre_, int nr_pag_,
                           float pret_, std::string specializare_)
        : Carte(nume_, autor_, genre_, nr_pag_, pret_), specializare{std::move(specializare_)} {}

void Enciclopedie::afisare() {
    std::cout<<"Nume:"<<nume<<std::endl;
    std::cout<<"Autor:"<<autor<<std::endl;
    std::cout<<"Specializare:"<<specializare<<std::endl;
}
