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
#include "klasa_zlecenia_ogloszenia.hpp"
#include "inne_zwoc_wrtosc_wyboru.hpp"
#include "klasa_uzytkownicy.hpp"
#include "klasa_uzytkownik.hpp"

using namespace std;

void klasa_zlecenia_ogloszenia::ogloszenia_menu()
{
    bool petla_exit_ = false;
    int wybor_;
    while (petla_exit_ != true)
    {
        system("clear");
        
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------TWOJ  ARCHITEKT.PL--------------------\\" << endl;
        cout << "//--------------------PANEL   OGLOSZENIA--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "\n\n\n1 - Twoje zlecenia" << endl;
        cout << "2 - Utworz zlecenie" << endl;
        cout << "3 - Usun zlecenie" << endl;
        cout << "4 - Otrzymane ogloszenia / zlecenia" << endl;
        cout << "5 - Zlecenia zakonczone" << endl;
        cout << "6 - Zlecenia w trakcie realizacji" << endl;
        cout << "7 - Historia zlecen" << endl;
        cout << "8 - Cofnij" << endl;
        cin >> wybor_;
        system("clear");
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
                break;
            }
            case 7:
            {
                break;
            }
            case 8:
            {
                break;
            }
        }
    }
};
