#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include "MetodyPomocnicze.h"
#include <cstdlib>
#include "Adresat.h"


class PlikZAdresatami
{
    string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;
   // fstream plikTekstowy;
    bool czyPlikJestPusty();
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
public:
   // PlikZAdresatami(string NAZWAPLIKUZADRESATAMI);
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI):NAZWA_PLIKU_Z_ADRESATAMI(NAZWAPLIKUZADRESATAMI)
{
    idOstatniegoAdresata=0;
}

    bool dopiszAdresataDoPliku(Adresat adresat);
    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int pobierzIdOstatniegoAdresata();
    void wczytajIdOstatniegoAdresata(int Id);

};


#endif // PLIKZADRESATAMI_H
