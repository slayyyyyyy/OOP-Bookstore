#include "Fidelitate.h"

#include <utility>
template<typename T>
Fidelitate<T>::Fidelitate(std::string nume_, std::string nr_tlf_, std::string email_, int reducere_, int perioada_fid_, const Carte &x_, T puncte_) :
        nume{std::move(nume_)}, nr_tlf{std::move(nr_tlf_)}, email{std::move(email_)}, reducere{reducere_}, perioada_fid{perioada_fid_}, puncte{puncte_}, x{x_}

{std::cout<<"constructor Fidelitate"<<'\n';}

template<typename T>
void Fidelitate<T>::aplicare_red() {
    if(perioada_fid>=2 && perioada_fid<6) reducere=10;
    if(perioada_fid>=6 && perioada_fid<12) reducere=20;
    if(perioada_fid>=12) reducere=45;
    bonus();
    if (reducere!=0)
    {
        float y= x.getpret() - reducere * x.getpret() / 100 - puncte / 50;
        x.setpret(y);
        std::cout << x.getpret() << '\n';
    }
}

template<typename T>
void Fidelitate<T>::bonus() {
    if (x.getpret() > 50) puncte=puncte + x.getpret() * 30 / 100;
}

template class Fidelitate<int>;


