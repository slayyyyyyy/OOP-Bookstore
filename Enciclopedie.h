#ifndef OOP_ENCICLOPEDIE_H
#define OOP_ENCICLOPEDIE_H
#include "Carte.h"

class Enciclopedie : public Carte {
public:
    Carte x;
    void reducere() override;
};


#endif //OOP_ENCICLOPEDIE_H
