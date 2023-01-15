

#include "Carte.h"

Carte::Carte(const std::string &nume_, const std::string &autor_, const std::string &genre_, int nr_pag_, float pret_) : nume{nume_}, autor{autor_}, genre{genre_}, nr_pag{nr_pag_}, pret{pret_}
{std::cout<<"constructor Carte"<<'\n';}

std::ostream &operator<<(std::ostream &os, const Carte &Carte) {
    os<<Carte.nume<<" "<<Carte.autor<<" "<<Carte.genre<<" "<<Carte.nr_pag<<" "<<Carte.pret;
    return os;
}
float Carte::getpret() const {return pret;}

void Carte::setpret(float pret_) {pret=pret_;}

void Carte::afisare() {
    std::cout<<*this;
}

void Carte::reducere() { }

Carte::Carte(const Carte &other)
        : nume(other.nume), autor(other.autor), genre(other.genre), nr_pag(other.nr_pag), pret(other.pret) {}

Carte &Carte::operator=(const Carte &other) {
    if (this != &other) {
        nume = other.nume;
        autor = other.autor;
        genre = other.genre;
        nr_pag = other.nr_pag;
        pret = other.pret;
    }
    return *this;
}


