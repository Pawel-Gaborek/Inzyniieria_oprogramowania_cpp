//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

//ponizej zalaczam dyrektywy
#include <iostream>

//zalaczam pliki klas
#include "klasa_uzytkownicy.hpp"
#include "klasa_uzytkownik.hpp"

#include "funkcja_haslo_.hpp"
#include "funkcja_login_.hpp"
#include "funkcja_uzytkownik_konstruktor.hpp"

void klasa_uzytkownicy::wczytaj_uzytkownika_(string linia_danych)
{
    string haslo;
    string login;
    klasa_uzytkownik *wczytany_uzytkownik;
    
    cout << "Wczytanie uzytkownika" << endl;
    
    login = login_(linia_danych);
    haslo = haslo_(linia_danych);
    
    cout << "Login: " << login << endl;
    cout << "Haslo: " << haslo << endl;
    
    wczytany_uzytkownik = new klasa_uzytkownik(login, haslo);
    //wczytany_uzytkownik ->
    
};
