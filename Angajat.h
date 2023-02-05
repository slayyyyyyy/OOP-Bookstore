#ifndef OOP_ANGAJAT_H
#define OOP_ANGAJAT_H
#include <iostream>
#include<vector>
#include<string>
#include "Exceptii.h"



class Angajat {
private:
    std::string nume;
    int id_angajat;
    float salariu;
    int perioada;
    int varsta;
public:
    Angajat(std::string  nume_, int id_angajat_,float salariu_, int perioada_, int varsta_);
    Angajat(const Angajat& other);
    Angajat& operator=(const Angajat& other)
    = default; //operator= + de adaugat constructor de copiere
    ~Angajat(); //destructor
    friend std::ostream& operator<<(std::ostream& os,const Angajat& Angajat);

    void marire();

};

#endif //OOP_ANGAJAT_H
