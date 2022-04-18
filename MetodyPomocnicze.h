#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;



 class MetodyPomocnicze
 {
public:
    static int konwersjaStringNaInt(string liczba);
    static string konwerjsaIntNaString(int liczba);
    static string wczytajLinie();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
 };

 #endif
