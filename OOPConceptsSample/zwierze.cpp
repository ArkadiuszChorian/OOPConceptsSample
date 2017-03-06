#include "zwierze.h"
using namespace moja_przestrzen;

Zwierze::Zwierze()
{
    //ctor
}

Zwierze::~Zwierze()
{
    //dtor
}

int Zwierze::energia()
{
    if (o_energia <= 0)
        return 0;
    return o_energia;
}

int Zwierze::glod()
{
    return o_glod;
}

int Zwierze::pragnienie()
{
    return o_pragnienie;
}

int Zwierze::wiek()
{
    return o_wiek;
}

void Zwierze::zmien_energia(int _energia)
{
    o_energia = _energia;
}

void Zwierze::zmien_glod(int _glod)
{
    o_glod = _glod;
}

void Zwierze::zmien_pragnienie(int _pragnienie)
{
    o_pragnienie = _pragnienie;
}

void Zwierze::zmien_wiek(int _wiek)
{
    o_wiek = _wiek;
}
