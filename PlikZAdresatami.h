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
    string nazwaPlikuZAdresatami;
    fstream plikTekstowy;
    bool czyPlikJestPusty();
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
public:
    PlikZAdresatami();
    void dopiszAdresataDoPliku(Adresat adresat);


};

#endif // PLIKZADRESATAMI_H
