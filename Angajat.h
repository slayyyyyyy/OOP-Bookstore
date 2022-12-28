#ifndef OOP_ANGAJAT_H
#define OOP_ANGAJAT_H
#include <iostream>
#include<vector>
#include<string>



class Angajat{
private:
    std::string nume;
    int id_angajat;
    float salariu;
    int perioada;
public:
    Angajat(const std::string& nume_, int id_angajat_,float salariu_, int perioada_);
    Angajat(const Angajat& other);
    Angajat& operator=(const Angajat& other)
    {
        nume = other.nume;
        id_angajat = other.id_angajat;
        salariu = other.salariu;
        perioada=other.perioada;
        return *this;
    } //operator= + de adaugat constructor de copiere
    ~Angajat(); //destructor
    friend std::ostream& operator<<(std::ostream& os,const Angajat& Angajat);

    void marire();

};

#endif //OOP_ANGAJAT_H
