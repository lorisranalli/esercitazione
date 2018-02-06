#include "AereiMotore.h"

AereiMotore::AereiMotore(string siglaId, double peso, double potenzaCV, double consumo):Aeromobile(siglaId,peso)
{
    this->potenzaCV=potenzaCV;
    this->consumo=consumo;
}

int AereiMotore::istanceof()
{
    return AEREIMOTORE;
}

bool AereiMotore::equals(Aeromobile* a)
{
    if(a->istanceof()==1)
    {
        AereiMotore* am=(AereiMotore*)a;    //Forzo il casting da Aeromobile ad AereiMotore del parametro a
        if((a->getSiglaId()==this->siglaId)&&(am->getPotenzaCV() == this->potenzaCV)&&(this->consumo==am->getConsumo()))
            return true;
    }
    return false;
}


double AereiMotore::getPotenzaCV()
{
    return potenzaCV;
}

double AereiMotore::getConsumo()
{
    return consumo;
}

void AereiMotore::toString()
{
    cout<<"------------------AEREO A MOTORE-----------------------\n";
    cout<<"Sigla:\t"<<siglaId<<endl;
    cout<<"Potenza CV:\t"<<potenzaCV<<endl;
    cout<<"Consumo:\t"<<consumo<<endl;

}
