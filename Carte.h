

#ifndef OOP_CARTE_H
#define OOP_CARTE_H
#include <iostream>
#include<vector>
#include<string>
#include "Exceptii.h"


class Carte{
protected:
    std::string nume;
    std::string autor;
    std::string genre;
    int nr_pag;
    float pret;
public:
    Carte(std::string  nume_,std::string  autor_,std::string  genre_, int nr_pag_, float pret_ );

    friend std::ostream& operator<<(std::ostream& os, const Carte& Carte);

    Carte(const Carte &other);
    Carte &operator=(const Carte &other);

    float getpret() const;
    void setpret (float pret_);

    virtual void afisare();

    virtual void reducere();

    virtual ~Carte() {} //destructor virtual


};



#endif //OOP_CARTE_H
