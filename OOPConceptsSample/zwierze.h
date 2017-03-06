#ifndef ZWIERZE_H
#define ZWIERZE_H

#include "pozywienie.h"
#include "plyn.h"

namespace moja_przestrzen
{

class Zwierze
{
    public:
        Zwierze();
        virtual ~Zwierze();
        int energia();
        int glod();
        int pragnienie();
        int wiek();
        void zmien_energia(int _energia);
        void zmien_glod(int _glod);
        void zmien_pragnienie(int _pragnienie);
        void zmien_wiek(int _wiek);
        virtual void spij(int czas) = 0;
        virtual void jedz(Pozywienie* pokarm) = 0;
        virtual void pij(Plyn* plyn)  = 0;
    protected:
        int o_energia;
        int o_glod;
        int o_pragnienie;
        int o_wiek;
    private:
};

}

#endif // ZWIERZE_H
