#include <iostream>
#include "animal.h"

#define VERSION 1.0

using namespace std;

perro trosky;

gallina josefina;
int main()
{
    std::cout << "Hola Granja.\n"
                 "Version: " << VERSION
              << "\n"
                 "Fecha:" << __DATE__
              << "\n"
              << "\n";

    animal* anAr[10];
    for(int i=0;i<10;i++)
    {
        cout << "presione '1' para crear un perro"<<endl;
        cout <<"presione '2' para crear una gallina("<<i<<") "<<endl;
        char opc;
        cin>>opc;
        if (opc=='1')
            anAr[i]= new perro();
        else if(opc=='2')
            anAr[i]= new gallina();
        else
        {
            cout<<"escriba 1 o 2"<< endl;
            i--;
            continue;
        }

    }
    for(int i=0; i<10;i++)
    {
        anAr[i]->hable();
        gallina* pG = dynamic_cast<gallina*>(anAr[i]);
        if(pG)
            pG->pongahuevo();
        perro* pP = dynamic_cast<perro*>(anAr[i]);
        if (pP)
            pP->hagaUnTruco();
    }



    return 0;
}

