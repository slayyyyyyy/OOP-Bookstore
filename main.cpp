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

    float getpret() const {return pret;}
    void setpret (float pret_) {pret=pret_;}
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
    int perioada;
public:
    Angajat(const std::string& nume_, int id_angajat_,float salariu_, int perioada_) : nume{nume_}, id_angajat{id_angajat_}, salariu{salariu_}, perioada{perioada_}
        {std::cout<<"constructor Angajat"<<'\n';};
    Angajat(const Angajat& other) : nume{other.nume}, id_angajat{other.id_angajat}, salariu{other.salariu}, perioada{other.perioada} {std::cout<<"Constructor de copiere Angajat\n";}
    Angajat& operator=(const Angajat& other)
    {
        nume = other.nume;
        id_angajat = other.id_angajat;
        salariu = other.salariu;
        perioada=other.perioada;
        return *this;
    } //operator= + de adaugat constructor de copiere
    ~Angajat() {}; //destructor
    friend std::ostream& operator<<(std::ostream& os,const Angajat& Angajat)
    {
        os<<Angajat.nume<<" "<<Angajat.id_angajat<<" "<<Angajat.salariu<<" "<<Angajat.perioada;
        return os;
    }

    void marire()
    {
        float s;
        if (perioada != 0 && perioada % 12 == 0) {
            s = salariu + salariu * 5 * (perioada / 12) / 100;
            std::cout<<s<<'\n';
        }
    }

};

class Fidelitate{
private:
    std::string nume;
    std::string nr_tlf;
    std::string email;
    int reducere=0;
    int perioada_fid;
    Carte x;
public:
    Fidelitate(const std::string& nume_, const std::string& nr_tlf_, const std::string& email_, int reducere_, int perioada_fid_, Carte x_) : 
    nume{nume_}, nr_tlf{nr_tlf_}, email{email_}, reducere{reducere_}, perioada_fid{perioada_fid_}, x{x_}

            {std::cout<<"constructor Fidelitate"<<'\n';};
    friend std::ostream& operator<<(std::ostream& os, const Fidelitate& Fidelitate)
    {
        os<<Fidelitate.nume<<" "<<Fidelitate.nr_tlf<<" "<<Fidelitate.email<<" "<<Fidelitate.reducere<<" "<<Fidelitate.perioada_fid<<" "<<Fidelitate.x;
        return os;
    }

    void aplicare_red()
    {
        if(perioada_fid>=2 && perioada_fid<6) reducere=10;
         if(perioada_fid>=6 && perioada_fid<12) reducere=20;
         if(perioada_fid>=12) reducere=45; 
        if (reducere!=0) 
        {
            float y=x.getpret()-reducere*x.getpret()/100;
            x.setpret(y);
            std::cout<<x.getpret()<<'\n';
        }
    };


};

class Librarie{
    std::vector<Carte> crt[100];
    std::vector<Angajat> ang[20];
    Distribuitor dis;
    std::vector<Fidelitate> fid[40];
public:
    Librarie(const std::vector<Carte> crt_, const std::vector<Angajat> ang_, Distribuitor dis_, const std::vector<Fidelitate> fid_) : crt{crt_}, ang{ang_}, dis{dis_}, fid{fid_}
        {std::cout<<"constructor Librarie"<<'\n';};
    friend std::ostream& operator<<(std::ostream& os, const Librarie& Librarie)
    {
        os<<Librarie.crt<<" "<<Librarie.ang<<" "<<Librarie.dis<<" "<<Librarie.fid;
        return os;
    }
};

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
