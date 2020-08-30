//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

#ifndef klasa_uzytkownicy_hpp
#define klasa_uzytkownicy_hpp

//ponizej zalaczam dyrektywy
#include <iostream>
#include <vector>

//ponizeej zalaczam klasy
#include "klasa_uzytkownik.hpp"
#include "funkcja_uzytkownicy_wczytaj_uzytkownika.hpp"

using namespace std;

class klasa_uzytkownicy
{
    
private:
    vector<klasa_uzytkownik*>uzytkownicy;
    
protected:
public:
    klasa_uzytkownicy();
    void uzytkownicy_menu(klasa_uzytkownicy *uzytkownicy_wsk);
    void wczytaj_uzytkownika(string linia_danych);
    void wczytaj_uzytkownika_(string linia_danych);
    void dodaj_uzutkownia(klasa_uzytkownicy *uzytkownicy);
    void usun_uzytkownika(klasa_uzytkownicy *uzytkownicy);
    void koryguj_dane(klasa_uzytkownicy *uzytkownicy);
};


#endif 
