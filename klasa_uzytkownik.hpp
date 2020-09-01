//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

#ifndef klasa_uzytkownik_hpp
#define klasa_uzytkownik_hpp

//ponizej zalaczam dyrektywy
#include <iostream>

using namespace std;

class klasa_uzytkownik
{
    
private:
    string login;
    string haslo;
    string imie;
    string nazwisko;
    string ulica;
    int numer_id;
    int numer_domu;
    int numer_lokalu;
    int kod_pocztowy;
    string miasto;
    string wojewodztwo;
    int tel_stacjonarny;
    int tel_komorkowy;
    string adres_email;
    string nazwa_firmy;
    int nip;
    int regon;
    int numer_pesel;
    
protected:
public:
    
    klasa_uzytkownik(string login_, string haslo, int numer_id_);
    klasa_uzytkownik();
    ~klasa_uzytkownik ();
    string zwroc_login();
    string zwroc_haslo();
    int zwroc_id();
};


#endif 
