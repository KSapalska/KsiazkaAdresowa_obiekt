#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"


using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

     public:
    KsiazkaAdresowa(string NAZWAPLIKUZUZYTKOWNIKAMI,string NAZWAPLIKUZADRESATAMI):
        uzytkownikMenedzer(NAZWAPLIKUZUZYTKOWNIKAMI),NAZWA_PLIKU_Z_ADRESATAMI(NAZWAPLIKUZADRESATAMI)
   {
   adresatMenedzer=NULL;
   };

   ~KsiazkaAdresowa()
    {
        delete adresatMenedzer;
        adresatMenedzer=NULL;
    }


   void rejestracjaUzytkownika();
   void wypiszWszystkichUzytkownikow();
   int logowanieUzytkownika();
   void zmianaHaslaZalogowanegoUzytkownika();
   void wylogowanieUzytkownika();
   void dodajAdresata();
   void wyszukajAdresatowPoImieniu();
   void wyszukajAdresatowPoNazwisku();
   void usunAdresata();
   void edytujAdresata();
   void wyswietlWszystkichAdresatow();
   void wczytajAdresatowZPliku();
   bool czyUzytkownikJestZalogowany();

};

#endif
