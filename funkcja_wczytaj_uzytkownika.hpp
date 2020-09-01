//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

//ponizej zalaczam dyrektywy
#include <iostream>
#include <vector>

//zalaczam pliki klas
#include "klasa_uzytkownicy.hpp"
#include "klasa_uzytkownik.hpp"

#include "funkcja_haslo_.hpp"
#include "funkcja_login_.hpp"
#include "funkcja_numer_id_.hpp"
#include "funkcja_uzytkownik_konstruktor.hpp"
#include "funkcja_uzytkownik_konstruktor_bez_argumentow.hpp"

void klasa_uzytkownicy::wczytaj_uzytkownika_(string linia_danych)
{
    string haslo;
    string login;
    string numer_id_string;
    int numer_id;
    klasa_uzytkownik* wczytany_uzytkownik = nullptr;
    
    cout << "Wczytanie uzytkownika" << endl;
    
    login = login_(linia_danych);
    haslo = haslo_(linia_danych);
    numer_id = numer_id_(linia_danych);
    
    cout << "Login: " << login << endl;
    cout << "Haslo: " << haslo << endl;
    cout << "Numer ID: " << numer_id << endl;
    
    wczytany_uzytkownik = new klasa_uzytkownik(login, haslo, numer_id);
    
    uzytkownicy.push_back(wczytany_uzytkownik);
    
};
