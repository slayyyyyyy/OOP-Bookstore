#ifndef OOP_LIBRARIE_H
#define OOP_LIBRARIE_H
#include <iostream>
#include<vector>
#include<string>
#include "Carte.h"
#include "Angajat.h"
#include "Distribuitor.h"
#include "Fidelitate.h"
#include "Enciclopedie.h"
#include "Carti_joc.h"
#include "Carti_desenat.h"
#include "Carti_copii.h"


class Librarie{
private:
    std::vector<Carte*> crt;
    std::vector<Angajat> ang;
    Distribuitor dis;
    std::vector<Fidelitate<int>> fid;
public:
    Librarie(std::vector<Carte*>  crt_, std::vector<Angajat>  ang_, Distribuitor  dis_, std::vector<Fidelitate<int>>  fid_);
    friend std::ostream& operator<<(std::ostream& os, const Librarie& Librarie);

    void addCarte(Carte* carte);
    void printCarte();
};

#endif //OOP_LIBRARIE_H
