
#ifndef OOP_FIDELITATE_H
#define OOP_FIDELITATE_H
#include <iostream>
#include<vector>
#include<string>
#include"Carte.h"
template <typename T>


class Fidelitate {
private:
    std::string nume;
    std::string nr_tlf;
    std::string email;
    int reducere = 0;
    int perioada_fid;
    T puncte;
    Carte x;
public:
    Fidelitate(std::string nume_, std::string nr_tlf_, std::string email_, int reducere_,
               int perioada_fid_, const Carte &x_, T puncte_);
    friend std::ostream &operator<<(std::ostream &os, const Fidelitate<T> &Fidelitate) {
        os << Fidelitate.nume << " " << Fidelitate.nr_tlf << " " << Fidelitate.email << " " << Fidelitate.reducere
           << " " << Fidelitate.perioada_fid << " " << Fidelitate.x<<" "<<Fidelitate.puncte;
        return os;
    }

    void aplicare_red();
    void bonus();
};

#endif //OOP_FIDELITATE_H
