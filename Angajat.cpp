#include "Angajat.h"

Angajat::Angajat(const std::string &nume_, int id_angajat_, float salariu_, int perioada_) : nume{nume_}, id_angajat{id_angajat_}, salariu{salariu_}, perioada{perioada_}
{std::cout<<"constructor Angajat"<<'\n';}

Angajat::Angajat(const Angajat &other) : nume{other.nume}, id_angajat{other.id_angajat}, salariu{other.salariu}, perioada{other.perioada} {std::cout<<"Constructor de copiere Angajat\n";}

Angajat::~Angajat() {}

std::ostream &operator<<(std::ostream &os, const Angajat &Angajat) {
    os<<Angajat.nume<<" "<<Angajat.id_angajat<<" "<<Angajat.salariu<<" "<<Angajat.perioada;
    return os;
}

void Angajat::marire() {
    if (perioada != 0 && perioada % 12 == 0) {
        float s = salariu + salariu * 5 * (perioada / 12) / 100;
        std::cout<<s<<'\n';
    }
}