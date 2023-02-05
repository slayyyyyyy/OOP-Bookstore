#include "Librarie.h"

#include <utility>
Librarie::Librarie(std::vector <Carte*> crt_, std::vector <Angajat> ang_, Distribuitor dis_,
                   std::vector <Fidelitate<int>> fid_) : crt{std::move(crt_)}, ang{std::move(ang_)}, dis{std::move(dis_)}, fid{std::move(fid_)}
{std::cout<<"constructor Librarie"<<'\n';}

std::ostream &operator<<(std::ostream &os, const Librarie &Librarie) {
    for(const auto& carte:Librarie.crt)
        os<<carte<<" ";
    for(const auto& angajat:Librarie.ang)
        os<<angajat<<" ";
    os<<Librarie.dis<<" ";
    for(const auto& fidelitate:Librarie.fid)
        os<<fidelitate;
    return os;
}

void Librarie::addCarte(Carte *carte) {
    crt.push_back(carte);
}

void Librarie::printCarte() {
    for(auto carte : crt)
    {
        if(dynamic_cast<Enciclopedie*>(carte) != nullptr)
            std::cout<<"Enciclopedie:";
        else if (dynamic_cast<Carti_joc*>(carte) != nullptr)
            std::cout<<"Carti_joc:";
        else if(dynamic_cast<Carti_desenat*>(carte) != nullptr)
            std::cout<<"Carti_desenat:";
        else if(dynamic_cast<Carti_copii*>(carte) != nullptr)
            std::cout<<"Carti_copii:";
        carte->afisare();
    }
}
