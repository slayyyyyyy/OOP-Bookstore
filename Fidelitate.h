
#ifndef OOP_FIDELITATE_H
#define OOP_FIDELITATE_H
#include <iostream>
#include<vector>
#include<string>
#include"Carte.h"


class Fidelitate{
private:
    std::string nume;
    std::string nr_tlf;
    std::string email;
    int reducere=0;
    int perioada_fid;
    Carte x;
public:
    Fidelitate(const std::string& nume_, const std::string& nr_tlf_, const std::string& email_, int reducere_, int perioada_fid_,const Carte& x_);
    friend std::ostream& operator<<(std::ostream& os, const Fidelitate& Fidelitate)
    {
        os<<Fidelitate.nume<<" "<<Fidelitate.nr_tlf<<" "<<Fidelitate.email<<" "<<Fidelitate.reducere<<" "<<Fidelitate.perioada_fid<<" "<<Fidelitate.x;
        return os;
    }

    void aplicare_red();


};



#endif //OOP_FIDELITATE_H
