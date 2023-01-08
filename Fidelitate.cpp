#include "Fidelitate.h"

Fidelitate::Fidelitate(const std::string &nume_, const std::string &nr_tlf_, const std::string &email_, int reducere_, int perioada_fid_, const Carte &x_) :
        nume{nume_}, nr_tlf{nr_tlf_}, email{email_}, reducere{reducere_}, perioada_fid{perioada_fid_}, x{x_}

{std::cout<<"constructor Fidelitate"<<'\n';}

void Fidelitate::aplicare_red() {
    if(perioada_fid>=2 && perioada_fid<6) reducere=10;
    if(perioada_fid>=6 && perioada_fid<12) reducere=20;
    if(perioada_fid>=12) reducere=45;
    if (reducere!=0)
    {
        float y=x.getpret()-reducere*x.getpret()/100;
        x.setpret(y);
        std::cout<<x.getpret()<<'\n';
    }
}




