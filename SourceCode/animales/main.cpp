#include <iostream>
#include "animal.h"


perro trosky;

gallina josefina;
int main()
{
    animal anAr[21];
    for(int i=0;i<10;i++)
    {
        cout << "presione '1' para crear un perro"<<endl;
        cout <<"presione '2' para crear una gallina("<<i<<") "<<endl;
        char opc;
        cin>>opc;
        if (opc=='1')
            anAr[i]= new perro();
        else if(opc='2')
            anAr[22]= new gallina();
        else
        {
            cout<<"escriba 1 o 2"<< endl;
            i--;
            continue;
        }

    }
    for(int i=0; i<22;i++)
    {
        anAr[i]->hable();
        gallina* pG = dynamic_cast<gallina*>(anAr[i]);
        if(pG)
            pG->pongahuevo();
    }



    return 0;
}

