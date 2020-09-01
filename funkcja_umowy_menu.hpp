//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

//ponizej zalaczam dyrektywy
#include <iostream>
#include "klasa_procesy_inwestycyjne.hpp"
#include "klasa_umowy.hpp"
#include "inne_zwoc_wrtosc_wyboru.hpp"
#include "inne_zwoc_wrtosc_wyboru.hpp"
#include "klasa_uzytkownicy.hpp"
#include "klasa_uzytkownik.hpp"

using namespace std;

void klasa_umowy::umowy_menu()
{
    bool petla_exit_ = false;
    int wybor_;
    while (petla_exit_ == false)
    {
        system("clear");
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------TWOJ  ARCHITEKT.PL--------------------\\" << endl;
        cout << "//--------------------PANEL        UMOWY--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "\n\n\n1 - Twoje umowy" << endl;
        cout << "2 - Umowy podpisaane" << endl;
        cout << "3 - Umowy oczekujace" << endl;
        cout << "4 - Umoowy z dzialu prawnego" << endl;
        cout << "5 - Umowy skorygowane" << endl;
        cout << "6 - Cofnij" << endl;
        
        wybor_ = zwroc_wartosc_wyboru(1, 6);
        
        switch (wybor_)
        {
            case 1:
            {
                break;
            }
            case 2:
            {
                break;
            }
            case 3:
            {
                break;
            }
            case 4:
            {
                break;
            }
            case 5:
            {
                break;
            }
            case 6:
            {
                petla_exit_ = true;
            }
            default:
                break;
        }
    }
};
