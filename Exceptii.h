#ifndef OOP_EXCEPTII_H
#define OOP_EXCEPTII_H
#include <stdexcept>
#include <string>

class eroare_clase:public std::runtime_error {
    using std::runtime_error::runtime_error;
};

class eroare_carte: public eroare_clase{
public:
    explicit eroare_carte(const std::string &mesaj);

};


#endif //OOP_EXCEPTII_H
