//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

//ponizej zalaczam dyrektywy
#include <iostream>
#include "klasa_ustawienia.hpp"
#include "inne_zwoc_wrtosc_wyboru.hpp"
#include "klasa_uzytkownicy.hpp"
#include "klasa_uzytkownik.hpp"

using namespace std;

void klasa_ustawienia::ustawienia_menu()
{
    bool petla_exit_ = false;
    int wybor_;
    
    while (petla_exit_ != true)
    {
        system("clear");
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------TWOJ  ARCHITEKT.PL--------------------\\" << endl;
        cout << "//--------------------PANEL   USTAWIENIA--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "\n\n\n1 - Ustawienie powiadomien SMS" << endl;
        cout << "2 - Ustawienie powiadomien MAILOWYCH" << endl;
        cout << "3 - Pozostale powiadomienia" << endl;
        cout << "4 - Cofnij" << endl;
        
        cin >> wybor_;
        
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
                petla_exit_ = true;
                break;
            }
            default:
            {
                break;
            }
        }
    }
};
