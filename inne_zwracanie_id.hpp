//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

#ifndef inne_zwracanie_id_hpp
#define inne_zwracanie_id_hpp

//ponizej zalaczam dyrektywy
#include <iostream>
#include "klasa_procesy_inwestycyjne.hpp"
#include "klasa_uzytkownik.hpp"
#include "klasa_uzytkownicy.hpp"

using namespace std;

template<class klasa_wsk, typename T>
T zwrocenie_id(klasa_wsk *wskaznik)
{
    T id_wartosc_do_zwrotu;
    
    id_wartosc_do_zwrotu = wskaznik -> zwroc_id();
    
    return id_wartosc_do_zwrotu;
};

#endif
