#ifndef SSAK_H
#define SSAK_H

#include "zwierze.h"

using namespace moja_przestrzen;

class Ssak : public virtual Zwierze
{
    public:
        Ssak();
        virtual ~Ssak();
        void spij(int czas);
        void jedz(Pozywienie* pokarm);
        void pij(Plyn* plyn);
        int szybkosc_biegania;
    protected:
    private:
};

#endif // SSAK_H
