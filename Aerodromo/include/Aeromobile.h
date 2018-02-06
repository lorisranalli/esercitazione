#ifndef AEROMOBILE_H
#define AEROMOBILE_H
#include <iostream>
#include <string>

using namespace std;
class Aeromobile
{
    public:
        Aeromobile(string siglaId, double peso);
        virtual bool equals(Aeromobile* a)=0;
        virtual void toString()=0;
        virtual int istanceof()=0;
        string getSiglaId();
    protected:
        string siglaId; //Sigla che identifica un Aeromobile
        double peso;    //peso in Kg


};

#endif // AEROMOBILE_H

