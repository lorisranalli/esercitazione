//Il collaboratore inserisce un commento
#ifndef AEREIMOTORE_H
#define AEREIMOTORE_H

#include "Aeromobile.h"

#define AEREIMOTORE 1

class AereiMotore : public Aeromobile
{
    public:
        AereiMotore(string siglaId, double peso,double potenzaCV, double consumo);
        bool equals(Aeromobile *a);
        void toString();
        int istanceof();
        double getPotenzaCV();
        double getConsumo();

    private:
        double potenzaCV;
        double consumo;


};

#endif // AEREIMOTORE_H
