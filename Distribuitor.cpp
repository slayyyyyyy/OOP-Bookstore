#include "Distribuitor.h"

Distribuitor::Distribuitor(int id_distribuitor_, const std::string &nume_, const std::string &adresa_) : id_distribuitor{id_distribuitor_}, nume{nume_}, adresa{adresa_}
{std::cout<<"constructor Distribuitor"<<'\n';}

std::ostream &operator<<(std::ostream &os, const Distribuitor &Distribuitor) {
    os<<Distribuitor.id_distribuitor<<" "<<Distribuitor.nume<<" "<<Distribuitor.adresa;
    return os;
}

