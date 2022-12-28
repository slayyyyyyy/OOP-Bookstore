#ifndef OOP_DISTRIBUITOR_H
#define OOP_DISTRIBUITOR_H
#include <iostream>
#include<vector>
#include<string>


class Distribuitor{
private:
    int id_distribuitor;
    std::string nume;
    std::string adresa;
public:
    Distribuitor(int id_distribuitor_, const std::string& nume_,const std::string& adresa_);
    friend std::ostream& operator<<(std::ostream& os, const Distribuitor& Distribuitor);
};


#endif //OOP_DISTRIBUITOR_H
