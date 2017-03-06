#ifndef RYBA_H
#define RYBA_H

#include "zwierze.h"

using namespace moja_przestrzen;

class Ryba : public virtual Zwierze
{
    public:
        Ryba();
        virtual ~Ryba();
        void spij(int czas);
        void jedz(Pozywienie* pokarm);
        void pij(Plyn* plyn);
        int szybkosc_plywania;
    protected:
    private:
};

#endif // RYBA_H
