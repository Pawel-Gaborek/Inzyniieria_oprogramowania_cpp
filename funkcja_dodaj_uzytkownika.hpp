//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

//ponizej zalaczam dyrektywy
#include <iostream>
#include <fstream>
#include <sstream>

//zalaczam pliki klas
#include "klasa_uzytkownicy.hpp"
#include "klasa_uzytkownik.hpp"
#include "inne_przydzielanie_id.hpp"
#include "inne_zwracanie_id.hpp"
#include "funkcja_size_vector.hpp"

void klasa_uzytkownicy::dodaj_uzytkownika(klasa_uzytkownicy *uzytkownicy_wsk)
{
    string _login;
    string _haslo;
    string file_name;
    fstream file;
    int wartosc_id;
    int _numer_id = 0;
    int ilosc_elementow_tablicy = uzytkownicy.size();
    
    klasa_uzytkownik* nowy_uzytkownik;
    
    cout << "Podaj nazwe uzytkownika: " << endl;
    cin >> _login;
    cout << "Podaj haslo uzytkownika: " << endl;
    cin >> _haslo;
    
    _numer_id = przydzielanie_id<klasa_uzytkownicy, int, vector<klasa_uzytkownik*>>(uzytkownicy_wsk, ilosc_elementow_tablicy);
    
    
    nowy_uzytkownik = new klasa_uzytkownik(_login, _haslo, _numer_id);
    //uzytkownicy_wsk -> uzytkownicy.push_back(nowy_uzytkownik);
    uzytkownicy.push_back(nowy_uzytkownik);
    
    file_name = "uzytkownicy";
    file.open(file_name+=".txt", ios::out | ios::app);
    if (!file.eof() == false)
    {
        cout << "Blad przy ladowaniu pliku" << endl;
        file.open("uzytkownicy.txt", ios::out | ios::app);
    }
    file << "\n" << _login << " " << _haslo << " " << _numer_id << endl;
    file.close();
    
};
