//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

#ifndef inne_zwroc_wrtosc_wyboru_hpp
#define inne_zwroc_wrtosc_wyboru_hpp

//ponizej zalaczam dyrektywy
#include <iostream>
#include "klasa_procesy_inwestycyjne.hpp"
#include "klasa_uzytkownicy.hpp"
#include "klasa_uzytkownik.hpp"

using namespace std;

int zwroc_wartosc_wyboru(int wart_pocz, int wart_kon)
{
    int wybor;
    bool zakoncz = false;
    while (zakoncz == false)
    {
        cin >> wybor;
        if (isdigit(wybor))
        {
            if (wart_pocz <= wybor && wybor <= wart_kon)
            {
                zakoncz = true;
            }
        }
    }
    return wybor;
};

#endif
