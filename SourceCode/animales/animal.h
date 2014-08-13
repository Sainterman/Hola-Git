#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class animal
{
public:
    bool esta_vivo;
    int nPatas;
    animal();
    virtual void hable();
    void muerase();
};


class perro : public animal
{
   public:
   string color;
   perro()
   void hable();
   void hagaUnTruco();

};

class gallina:public animal
{
public:
    gallina();
    void hable();
    void pongahuevo();


};



#endif // ANIMAL_H
