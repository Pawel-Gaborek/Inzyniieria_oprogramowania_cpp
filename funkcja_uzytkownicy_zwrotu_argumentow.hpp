//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

#ifndef funkcja_uzytkownicy_zwrotu_argumentow_hpp
#define funkcja_uzytkownicy_zwrotu_argumentow_hpp

//ponizej zalaczam dyrektywy
#include <iostream>
#include "klasa_uzytkownicy.hpp"
#include "klasa_uzytkownik.hpp"

using namespace std;

vector<klasa_uzytkownik*> klasa_uzytkownicy::zwroc_tablice()
{
    return uzytkownicy;
};

#endif
