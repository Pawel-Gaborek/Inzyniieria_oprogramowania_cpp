//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

#ifndef klasa_kalendarz_hpp
#define klasa_kalendarz_hpp

//ponizej zalaczam dyrektywy
#include <iostream>

//ponizej zalaczam klasy
#include "klasa_poczta_grupa_uzytkownicy.hpp"

using namespace std;

class klasa_kalendarz
{
    
private:
    int wydarzenie_data;
    int wydarzenie_godzina;
    string wydarzenie_miejsce_miasto;
    string wydarzenie_miejsce_ulica;
    int wydarzenie_miejsce_numer;
    klasa_poczta_grupa_uzytkownicy *uczestnicy_wydarzenia;
    
    
protected:
public:
    
    void dodaj_wydarzenie();
    void usun_wydarzenie();
    void koryguj_wydarzenie();
    
};

#endif 
