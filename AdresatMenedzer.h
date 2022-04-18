#ifndef ADRESATMENEGER_H
#define ADRESATMENEGER_H
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include <vector>

class AdresatMenedzer
{
    vector<Adresat> adresaci;
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;
public:
    AdresatMenedzer();
    void dodajAdresata(int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
};

#endif // ADRESATMENEGER_H
