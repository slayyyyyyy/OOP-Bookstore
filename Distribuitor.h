#ifndef OOP_DISTRIBUITOR_H
#define OOP_DISTRIBUITOR_H
#include <iostream>
#include<vector>
#include<string>

class Distribuitor {
private:
    static Distribuitor* instance;
    static int static_id_distribuitor;
    const int id_distribuitor;
    std::string nume;
    std::string adresa;

    Distribuitor();
    Distribuitor(int id_distribuitor_, std::string nume_,std::string adresa_);

public:
    static Distribuitor* getInstance() {
        if (!instance)
            instance = new Distribuitor();
        return instance;
    }

    friend std::ostream& operator<<(std::ostream& os, const Distribuitor& Distribuitor);
};

#endif //OOP_DISTRIBUITOR_H



