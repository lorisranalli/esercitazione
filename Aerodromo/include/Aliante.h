#ifndef ALIANTE_H
#define ALIANTE_H

#include "Aeromobile.h"

#define ALIANTE 0

class Aliante : public Aeromobile
{
    public:
        Aliante(string siglaId, double peso,int efficienzaAerod);
        bool equals(Aeromobile *a);
        void toString();
        int istanceof();
        int getEfficienzaAerod();
    private:
        int efficienzaAerod;
};

#endif // ALIANTE_H
