#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;


class PlikZUzytkownikami : public PlikTekstowy
{
    const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;
  //  fstream plikTekstowy;

    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
    public:

    PlikZUzytkownikami(string nazwaPlikuZUzytkownikami): PlikTekstowy(nazwaPlikuZUzytkownikami){};  //lista inicjalizacyjna
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPlkiu();
     void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);

};

#endif
