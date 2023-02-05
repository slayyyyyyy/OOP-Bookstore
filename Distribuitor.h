#ifndef OOP_DISTRIBUITOR_H
#define OOP_DISTRIBUITOR_H
#include <iostream>
#include<vector>
#include<string>



class Distribuitor{
private:
    static int static_id_distribuitor;
    const int id_distribuitor;
    std::string nume;
    std::string adresa;
public:
    Distribuitor();
    Distribuitor(int id_distribuitor_, std::string  nume_,std::string  adresa_);
    friend std::ostream& operator<<(std::ostream& os, const Distribuitor& Distribuitor);
};


#endif //OOP_DISTRIBUITOR_H
