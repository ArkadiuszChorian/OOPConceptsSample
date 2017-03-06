#include "czlowiek.h"
#include <iostream>
using namespace std;

Czlowiek::Czlowiek()
{
    o_energia = 100;
    o_glod = 0;
    o_pragnienie = 0;
    o_wiek = 0;
    szybkosc_biegania = 50;
    szybkosc_plywania = 20;
}

Czlowiek::~Czlowiek(){}

Czlowiek::Narzedzie::Narzedzie(int _energia)
{
    if ( _energia < 0 )
        throw 33;
    else
    energia = _energia;
}

Czlowiek::Narzedzie::~Narzedzie(){}

void Czlowiek::spij(int czas)
{
    if ( o_energia + 8*czas <= 100 )
        o_energia += 8*czas;
    else
        o_energia = 100;
}

void Czlowiek::jedz(Pozywienie* pokarm)
{
    if ( o_glod - pokarm->redukcja >= 0 )
        o_glod -= pokarm->redukcja;
    else
        o_glod = 0;

    if ( o_energia + pokarm->energia <= 100 )
        o_energia += pokarm->energia;
    else
        o_energia = 100;
    cout<<"Ale sie najadlem\n";
}

void Czlowiek::pij(Plyn* plyn)
{
    if ( o_pragnienie - plyn->redukcja >= 0 )
        o_pragnienie -= plyn->redukcja;
    else
        o_pragnienie = 0;

    if ( o_energia + plyn->energia <= 100 )
        o_energia += plyn->energia;
    else
        o_energia = 100;
    cout<<"Ale sie napilem\n";
}

void Czlowiek::atakuj(Zwierze* ofiara,Narzedzie* bron)
{
    if ( bron != NULL )
    {
         int nowa_energia = ofiara->energia() - bron->energia;
         ofiara->zmien_energia(nowa_energia);
         nowa_energia = energia() - 30;
         zmien_energia(nowa_energia);
         if ( ofiara->energia() <= 0)
         {
             cout<<"Czlowiek zabil ofiare\n";
             delete ofiara;
         }
    }
}
