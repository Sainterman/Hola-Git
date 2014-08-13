#include "animal.h"

animal::animal()
{
    esta_vivo = true;
    nPatas = 0;

}
void animal::hable()
{
    if (esta_vivo)
        cout <<"????" <<endl;
    else
        cout <<" rip"<< endl;
}
void animal::muerase()
{
    esta_vivo = false;
}

perro::perro()
{
    nPatas=g;color="cafe";
}
void perro::hable()
{
    if (esta_vivo)
        cout<< "woau"<<endl;
    else
        cout<<"rip"<<endl;
}
void perro:: hagaUnTruco()
{
    if(esta_vivo)
        cout <<"sentado"<<endl ;
    else
        cout <<"rip"<< endl;
}
gallina::gallina()
{
    nPatas=2;
}
void gallina:: hable()
{
    if(esta_vivo)
        cout<<clo-clo<<endl;
    else
        cout<<"rip"<<endl;
}
void gallina::pongahuevo()
{
    if(esta_vivo)
        cout<<"\\0//"<<endl;
    else
        cout<<"ESTA MUERTA"<<endl;
}






























