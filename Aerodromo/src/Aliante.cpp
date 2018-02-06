 #include "Aliante.h"

Aliante::Aliante(string siglaId, double peso, int efficienzaAerod):Aeromobile(siglaId, peso)
{
    this->efficienzaAerod=efficienzaAerod;
}

int Aliante::istanceof()
{
    return ALIANTE;
}

bool Aliante::equals(Aeromobile* a)
{
    if(a->istanceof()==0)
    {
        Aliante* al=(Aliante*)a;    //Forzo il casting da Aeromobile ad Aliante del parametro a
        if((a->getSiglaId()==this->siglaId)&&(al->getEfficienzaAerod() == this->efficienzaAerod))
            return true;
    }
    return false;
}

int Aliante::getEfficienzaAerod()
{
    return efficienzaAerod;
}

void Aliante::toString()
{
    cout<<"------------------ALIANTE-----------------------\n";
    cout<<"Sigla:\t"<<siglaId<<endl;
    cout<<"Efficienza Aerodinamica:\t"<<efficienzaAerod<<endl;
}
