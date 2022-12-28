#include <iostream>
#include<vector>
#include<string>
#include"Carte.h"
#include"Distribuitor.h"
#include"Angajat.h"
#include"Fidelitate.h"

int main()
{
    std::vector<Carte> crt;
    std::vector<Distribuitor> dis;
    std::vector<Angajat> ang;
    std::vector<Fidelitate> fid;
    crt.push_back(Carte("1984", "George Orwell","distopie",224, 20 ));
    crt.push_back(Carte("Fratii Karamazov", "Fyodor Dostoievski","fictiune filozofica",780, 40 ));
    crt.push_back(Carte("Micul Print", "Antoine de Saint-Exupery","copii",70, 15 ));
    crt.push_back(Carte("Ion", "Liviu Rebreanu","interbelic",268, 25 ));
    dis.push_back(Distribuitor(12345, "Bookdepot", "Calea Plevnei 45" ));
    ang.push_back(Angajat("Cosmin Andrei",15 ,2345.60f, 4 ));
    ang.push_back(Angajat("Badulescu Raluca",23 ,2465.70f, 12 ));
    fid.push_back(Fidelitate("Trifoi Margareta", "0721456790", "trifoi@margareta.ro", 10, 4,{"1984", "George Orwell","distopie",224, 20}));
    fid.push_back(Fidelitate("Marginean Sara", "0753534210", "saratzika@yahoo.ro", 20, 7,{"Fratii Karamazov", "Fyodor Dostoievski","fictiune filozofica",780, 40}));
    fid[0].aplicare_red();
    fid[1].aplicare_red();
    ang[1].marire();
    return 0;
}
