#ifndef OOP_ENCICLOPEDIE_H
#define OOP_ENCICLOPEDIE_H
#include "Carte.h"
#include <string>

class Enciclopedie : public Carte {
private:
    std::string specializare;
public:
    Enciclopedie(const std::string& nume_,const std::string& autor_, const std::string& genre_, int nr_pag_, float pret_, std::string  specializare_);
    void reducere() override;
    void afisare() override;
};


#endif //OOP_ENCICLOPEDIE_H
