//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

#ifndef inne_przydzielanie_id_hpp
#define inne_przydzielanie_id_hpp

//ponizej zalaczam dyrektywy
#include <iostream>
#include "klasa_procesy_inwestycyjne.hpp"
#include "klasa_uzytkownik.hpp"
#include "klasa_uzytkownicy.hpp"
#include "funkcja_uzytkownicy_zwrotu_argumentow.hpp"


using namespace std;

template<class klasa_wsk, typename typ_zmiennej_ID, typename typ_tablicy>
typ_zmiennej_ID przydzielanie_id(klasa_wsk *wskaznik, int ilosc_elementow_tablicy)
{
    bool petla_exit_ = false;
    int min_id = 0;
    int max_id = 10000000;
    typ_zmiennej_ID losuj_id;
    typ_tablicy tablica = wskaznik -> zwroc_tablice();
    
    while (petla_exit_ != true)
    {
        petla_exit_ = false;
        losuj_id = rand() % (max_id - (min_id+1)+min_id);
        for (int i=0 ; i<ilosc_elementow_tablicy ; i++)
        {
            if (tablica[i] -> zwroc_id())
            {
                petla_exit_ = true;
            }
        }
    }
    return losuj_id;
};

#endif
