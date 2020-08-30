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

void klasa_uzytkownicy::dodaj_uzytkownika(klasa_uzytkownicy *uzytkownicy)
{
    string _login;
    string _haslo;
    string file_name;
    fstream file;
    
    klasa_uzytkownik* nowy_uzytkownik;
    
    cout << "Podaj nazwe uzytkownika: " << endl;
    cin >> _login;
    cout << "Podaj haslo uzytkownika: " << endl;
    cin >> _haslo;
    
    nowy_uzytkownik = new klasa_uzytkownik(_login, _haslo);
    uzytkownicy -> uzytkownicy.push_back(nowy_uzytkownik);
    
    file_name = "uzytkownicy";
    file.open(file_name+=".txt", ios::out | ios::app);
    if (!file.eof() == false)
    {
        cout << "Blad przy ladowaniu pliku" << endl;
        file.open("uzytkownicy.txt", ios::out | ios::app);
    }
    file << "\n" << _login << " " << _haslo << endl;
    file.close();
    
};
