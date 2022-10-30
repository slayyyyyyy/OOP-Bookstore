#include <iostream>
#include<vector>
#include<string>


class Carte{
private:
    std::string nume;
    std::string autor;
    std::string genre;
    int nr_pag;
    float pret;
public:
    Carte(const std::string& nume_,const std::string& autor_,const std::string& genre_, int nr_pag_, float pret_ ) : nume{nume_}, autor{autor_}, genre{genre_}, nr_pag{nr_pag_}, pret{pret_}
        {std::cout<<"constructor Carte"<<'\n';};
    friend std::ostream& operator<<(std::ostream& os, const Carte& Carte)
    {
        os<<Carte.nume<<" "<<Carte.autor<<" "<<Carte.genre<<" "<<Carte.nr_pag<<" "<<Carte.pret;
        return os;
    }
};

class Distribuitor{
private:
    int id_distribuitor;
    std::string nume;
    std::string adresa;
public:
    Distribuitor(int id_distribuitor_, const std::string& nume_,const std::string& adresa_) : id_distribuitor{id_distribuitor_}, nume{nume_}, adresa{adresa_}
        {std::cout<<"constructor Distribuitor"<<'\n';};
    friend std::ostream& operator<<(std::ostream& os, const Distribuitor& Distribuitor)
    {
        os<<Distribuitor.id_distribuitor<<" "<<Distribuitor.nume<<" "<<Distribuitor.adresa;
        return os;
    }
};

class Angajat{
private:
    std::string nume;
    int id_angajat;
    float salariu;
public:
    Angajat(const std::string& nume_, int id_angajat_,float salariu_) : nume{nume_}, id_angajat{id_angajat_}, salariu{salariu_}
        {std::cout<<"constructor Angajat"<<'\n';};
    Angajat(const Angajat& other) : nume{other.nume}, id_angajat{other.id_angajat}, salariu{other.salariu} {std::cout<<"Constructor de copiere Angajat\n";}
    Angajat& operator=(const Angajat& other)
    {
        nume = other.nume;
        id_angajat = other.id_angajat;
        salariu = other.salariu;
        return *this;
    } //operator= + de adaugat constructor de copiere
    ~Angajat() {}; //destructor
    friend std::ostream& operator<<(std::ostream& os,const Angajat& Angajat)
    {
        os<<Angajat.nume<<" "<<Angajat.id_angajat<<" "<<Angajat.salariu;
        return os;
    }

};

class Fidelitate{
private:
    std::string nume;
    std::string nr_tlf;
    std::string email;
    int reducere;
public:
    Fidelitate(const std::string& nume_, const std::string& nr_tlf_, const std::string email_, int reducere_) : nume{nume_}, nr_tlf{nr_tlf_}, email{email_}, reducere{reducere_}

            {std::cout<<"constructor Fidelitate"<<'\n';};
    friend std::ostream& operator<<(std::ostream& os, const Fidelitate& Fidelitate)
    {
        os<<Fidelitate.nume<<" "<<Fidelitate.nr_tlf<<" "<<Fidelitate.email<<" "<<Fidelitate.reducere;
        return os;
    }

};

class Librarie{
    Carte crt;
    Angajat ang;
    Distribuitor dis;
    Fidelitate fid;
};

int main()
{
    Carte C1{"1984","George Orwell","distopie",326,20};
    Distribuitor D1{1,"Bookdepot","Calea Plevnei"};


    std::cout<<C1<<" "<<D1;
    return 0;
}
};

class Angajat{
private:
    std::string nume;
    int id_angajat;
    float salariu;
public:
    Angajat(const std::string& nume_, int id_angajat_,float salariu_) : nume{nume_}, id_angajat{id_angajat_}, salariu{salariu_}
        {std::cout<<"constructor Angajat"<<'\n';};
    Angajat& operator=(const Angajat& other); //operator=
    ~Angajat(); //destructor
    friend std::ostream& operator<<(std::ostream& os,const Angajat& Angajat)
    {
        os<<Angajat.nume<<" "<<Angajat.id_angajat<<" "<<Angajat.salariu;
        return os;
    }

};

class Fidelitate{
private:
    std::string nume;
    std::string nr_tlf;
    std::string email;
    int reducere;
public:
    Fidelitate(const std::string& nume_, const std::string& nr_tlf_, const std::string email_, int reducere_) : nume{nume_}, nr_tlf{nr_tlf_}, email{email_}, reducere{reducere_}

            {std::cout<<"constructor Fidelitate"<<'\n';};
    friend std::ostream& operator<<(std::ostream& os, const Fidelitate& Fidelitate)
    {
        os<<Fidelitate.nume<<" "<<Fidelitate.nr_tlf<<" "<<Fidelitate.email<<" "<<Fidelitate.reducere;
        return os;
    }

};

int main()
{

    return 0;
}
