#include "Librarie.h"

Librarie::Librarie(const std::vector <Carte> &crt_, const std::vector <Angajat> &ang_, const Distribuitor &dis_,
                   const std::vector <Fidelitate> &fid_) : crt{crt_}, ang{ang_}, dis{dis_}, fid{fid_}
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
