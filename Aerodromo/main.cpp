#include "Aliante.h"
#include "AereiMotore.h"

//Altro branch

int main()
{
    Aeromobile* a1=new Aliante("A12AL",3940.0,15);
    Aeromobile* a2=new AereiMotore("B35AM",376548.87,80,25);
    Aeromobile* a4=new AereiMotore("B35AM",376548.87,80,25);
    a2->toString();
    cout<<endl<<endl;
    a1->toString();
    if(a2->equals(a4))
        cout << "\nI due Aeromobili sono uguali" << endl;
    else
        cout << "\nI due Aeromobili sono diversi" << endl;
    return 0;
}
