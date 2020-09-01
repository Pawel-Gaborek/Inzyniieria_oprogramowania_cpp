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

//ponizej zalaczam pliki klas
#include "klasa_uzytkownik.hpp"
#include "klasa_uzytkownicy.hpp"


using namespace std;

class klasa_wiadomosc
{
    
private:
    klasa_uzytkownik *nadawca;
    klasa_uzytkownik *odbiorca;
    string tresc;
    string tytul;
    int data_powstania;
    
protected:
public:
    void utworz_wiadomosc;
    void usun_wiadomosc;
    void edytuj_wiadomosc;
    
};

#endif 
