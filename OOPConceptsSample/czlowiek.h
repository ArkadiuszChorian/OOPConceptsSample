#ifndef CZLOWIEK_H
#define CZLOWIEK_H

#include "ssak.h"
#include "ryba.h"

using namespace moja_przestrzen;

class Czlowiek : public Ssak, public Ryba
{
    public:
        Czlowiek();
        virtual ~Czlowiek();
        class Narzedzie
        {
            public:
                Narzedzie(int _energia);
                ~Narzedzie();
                int energia;
            protected:
            private:
        };
        void spij(int czas);
        void jedz(Pozywienie* pokarm);
        void pij(Plyn* plyn);
        void atakuj(Zwierze* ofiara,Narzedzie* bron);
    protected:
    private:
};

#endif // CZLOWIEK_H
