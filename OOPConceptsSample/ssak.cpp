#include "ssak.h"
#include <iostream>
using namespace std;

Ssak::Ssak()
{
    o_energia = 100;
    o_glod = 0;
    o_pragnienie = 0;
    o_wiek = 0;
}

Ssak::~Ssak()
{
    cout<<"Ssak umiera\n";
}

void Ssak::spij(int czas)
{
    if ( o_energia + 7*czas <= 100 )
        o_energia += 7*czas;
    else
        o_energia = 100;
}

void Ssak::jedz(Pozywienie* pokarm)
{
    if ( o_glod - pokarm->redukcja >= 0 )
        o_glod -= pokarm->redukcja;
    else
        o_glod = 0;

    if ( o_energia + pokarm->energia <= 100 )
        o_energia += pokarm->energia;
    else
        o_energia = 100;
}

void Ssak::pij(Plyn* plyn)
{
    if ( o_pragnienie - plyn->redukcja >= 0 )
        o_pragnienie -= plyn->redukcja;
    else
        o_pragnienie = 0;

    if ( o_energia + plyn->energia <= 100 )
        o_energia += plyn->energia;
    else
        o_energia = 100;
}
