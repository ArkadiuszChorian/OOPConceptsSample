#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "zwierze.h"
#include "ssak.h"
#include "ryba.h"
#include "czlowiek.h"
#include "pozywienie.h"
#include "plyn.h"

using namespace std;
using namespace moja_przestrzen;

int main()
{
    Zwierze* ssak = new Ssak;
    Zwierze* ryba = new Ryba;
    Pozywienie* pokarm = new Pozywienie(20,30);
    Plyn* plyn = new Plyn(5,60);
    Czlowiek* czlowiek = new Czlowiek;
    Czlowiek::Narzedzie* narzedzie = new Czlowiek::Narzedzie(110);

    cout<<"Pokazowe uzycie programu\n";
    cout<<"Za kazdym razem by kontynuowac nacisnij enter\n";
    getch();
    cout<<"Parametry obiektow:\n";
    cout<<"\tCzlowiek: energia | glod | pragnienie   "<<czlowiek->energia()<<"|"<<czlowiek->glod()<<"|"<<czlowiek->pragnienie()<<endl;
    cout<<"\tSsak:     energia | glod | pragnienie   "<<ssak->energia()<<"|"<<ssak->glod()<<"|"<<ssak->pragnienie()<<endl;
    cout<<"\tRyba:     energia | glod | pragnienie   "<<ryba->energia()<<"|"<<ryba->glod()<<"|"<<ryba->pragnienie()<<endl;
    cout<<"\tPokarm:   energia | redukcja_glodu      "<<pokarm->energia<<"|"<<pokarm->redukcja<<endl;
    cout<<"\tPlyn:     energia | redukcja_pragnienia "<<plyn->energia<<"|"<<plyn->redukcja<<endl;
    cout<<"\tNarzedzie:energia                       "<<narzedzie->energia<<endl<<endl;
    getch();
    cout<<"Czlowiek zaatakuje narzedziem ssaka\n";
    getch();
    czlowiek->atakuj(ssak,narzedzie);
    czlowiek->zmien_glod(30);
    czlowiek->zmien_pragnienie(50);
    ryba->zmien_energia(90);
    ryba->zmien_glod(5);
    ryba->zmien_pragnienie(10);
    getch();
    cout<<"\n !!!!!! Czlowiek zmeczyl sie troche walka, zglodnial, a takze musi sie napic\n";
    cout<<"Oprocz tego ryba zdazyla zmeczyc sie plywaniem i rowniez zglodniec\n\n";
    cout<<"Parametry obiektow:\n";
    cout<<"\tCzlowiek: energia | glod | pragnienie   "<<czlowiek->energia()<<"|"<<czlowiek->glod()<<"|"<<czlowiek->pragnienie()<<endl;
    cout<<"\tSsak:     energia | glod | pragnienie   "<<ssak->energia()<<"|"<<ssak->glod()<<"|"<<ssak->pragnienie()<<endl;
    cout<<"\tRyba:     energia | glod | pragnienie   "<<ryba->energia()<<"|"<<ryba->glod()<<"|"<<ryba->pragnienie()<<endl;
    cout<<"\tPokarm:   energia | redukcja_glodu      "<<pokarm->energia<<"|"<<pokarm->redukcja<<endl;
    cout<<"\tPlyn:     energia | redukcja_pragnienia "<<plyn->energia<<"|"<<plyn->redukcja<<endl;
    cout<<"\tNarzedzie:energia                       "<<narzedzie->energia<<endl<<endl;
    cout<<"Napoimy czlowieka stworzonym napojem i nakarmimy jedzeniem\n";
    getch();
    czlowiek->jedz(pokarm);
    getch();
    czlowiek->pij(plyn);
    getch();
    cout<<"\nRyba jeszcze bardziej zmeczona\n";
    ryba->zmien_energia(60);
    cout<<"Parametry obiektow:\n";
    cout<<"\tCzlowiek: energia | glod | pragnienie   "<<czlowiek->energia()<<"|"<<czlowiek->glod()<<"|"<<czlowiek->pragnienie()<<endl;
    cout<<"\tSsak:     energia | glod | pragnienie   "<<ssak->energia()<<"|"<<ssak->glod()<<"|"<<ssak->pragnienie()<<endl;
    cout<<"\tRyba:     energia | glod | pragnienie   "<<ryba->energia()<<"|"<<ryba->glod()<<"|"<<ryba->pragnienie()<<endl;
    cout<<"\tPokarm:   energia | redukcja_glodu      "<<pokarm->energia<<"|"<<pokarm->redukcja<<endl;
    cout<<"\tPlyn:     energia | redukcja_pragnienia "<<plyn->energia<<"|"<<plyn->redukcja<<endl;
    cout<<"\tNarzedzie:energia                       "<<narzedzie->energia<<endl<<endl;
    getch();
    cout<<"Damy jej odpoczac\n";
    ryba->spij(10);
    getch();
    cout<<"Parametry obiektow:\n";
    cout<<"\tCzlowiek: energia | glod | pragnienie   "<<czlowiek->energia()<<"|"<<czlowiek->glod()<<"|"<<czlowiek->pragnienie()<<endl;
    cout<<"\tSsak:     energia | glod | pragnienie   "<<ssak->energia()<<"|"<<ssak->glod()<<"|"<<ssak->pragnienie()<<endl;
    cout<<"\tRyba:     energia | glod | pragnienie   "<<ryba->energia()<<"|"<<ryba->glod()<<"|"<<ryba->pragnienie()<<endl;
    cout<<"\tPokarm:   energia | redukcja_glodu      "<<pokarm->energia<<"|"<<pokarm->redukcja<<endl;
    cout<<"\tPlyn:     energia | redukcja_pragnienia "<<plyn->energia<<"|"<<plyn->redukcja<<endl;
    cout<<"\tNarzedzie:energia                       "<<narzedzie->energia<<endl<<endl;
    getch();
    cout<<"Obsluga przykladowego wyjatku\n\n";
    getch();
    try
    {
        narzedzie = new Czlowiek::Narzedzie(-10);
    }
    catch(int)
    {
        delete narzedzie;
        cout<<"BLAD: Chciales nadac ujemna energie\n";
    }

    return 0;
}
