

#ifndef OOP_CARTE_H
#define OOP_CARTE_H
#include <iostream>
#include<vector>
#include<string>


class Carte{
private:
    std::string nume;
    std::string autor;
    std::string genre;
    int nr_pag;
    float pret;
public:
    Carte(const std::string& nume_,const std::string& autor_,const std::string& genre_, int nr_pag_, float pret_ );
    friend std::ostream& operator<<(std::ostream& os, const Carte& Carte);

    float getpret() const;
    void setpret (float pret_);
};



#endif //OOP_CARTE_H
