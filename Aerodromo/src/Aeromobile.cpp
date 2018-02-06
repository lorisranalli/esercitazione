#include "Aeromobile.h"

Aeromobile::Aeromobile(string siglaId, double peso)
{
    this->siglaId=siglaId;
    this->peso=peso;
}
string Aeromobile::getSiglaId()
{
    return siglaId;
}
