#include<iostream>
#include<vector>
#include<string>
#include"Carte.h"
#include"Distribuitor.h"
#include"Angajat.h"
#include"Fidelitate.h"
#include "Carti_copii.h"
#include "Carti_desenat.h"
#include "Carti_joc.h"
#include "Enciclopedie.h"
#include "Librarie.h"
#include "Exceptii.h"

int main()
{
    std::vector<Carte> crt;
    std::vector<Distribuitor> dis;
    std::vector<Angajat> ang;
    std::vector<Fidelitate<int>> fid;
    try {
        crt.push_back(Carte("1984", "George Orwell", "distopie", 224, 20));
        crt.push_back(Carte("Fratii Karamazov", "Fyodor Dostoievski", "fictiune filozofica", 780, 40));
        crt.push_back(Carte("Fluturi", "Irina Binder", "romance", 328, 15));
        crt.push_back(Carte("Ion", "Liviu Rebreanu", "interbelic", 268, 25));
        crt.push_back(Carte("Margareta", "Petre Ispirescu", "balzacian", 104, 32));
    }
    catch(eroare_carte &error)
    {std::cout<<error.what()<<"\n";}

    //dis.push_back(Distribuitor(1, "Bookdepot", "Calea Plevnei 45" ));

    try {
        ang.push_back(Angajat("Cosmin Andrei", 15, 2345.60f, 4, 20));
        ang.push_back(Angajat("Badulescu Raluca", 23, 2465.70f, 12, 15));
    }
    catch(eroare_angajat &error)
    {std::cout<<error.what()<<"\n";}

    fid.push_back(Fidelitate<int>("Trifoi Margareta", "0721456790", "trifoi@margareta.ro", 10, 4,{"1984", "George Orwell","distopie",224, 20},0));
    fid.push_back(Fidelitate("Marginean Sara", "0753534210", "saratzika@yahoo.ro", 20, 7,{"Fratii Karamazov", "Fyodor Dostoievski","fictiune filozofica",780, 80},0));
    fid[0].aplicare_red();
    fid[1].aplicare_red();
    ang[1].marire();

    Carti_desenat Cartedesenat1("Sa desenam", "Lydia Bubble", "pentru adulti", 30, 43);
    std::cout<< Cartedesenat1.getpret();

    return 0;
}
