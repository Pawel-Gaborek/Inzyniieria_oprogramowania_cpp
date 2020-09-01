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
#include "klasa_naleznosci_oplaty.hpp"
#include "inne_zwoc_wrtosc_wyboru.hpp"
#include "klasa_uzytkownicy.hpp"
#include "klasa_uzytkownik.hpp"

using namespace std;

void klasa_naleznosci_oplaty::oplaty_menu()
{
    bool petla_exit_ = false;
    int wybor_;
    
    while (petla_exit_ != true)
    {
        system("clear");
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------TWOJ  ARCHITEKT.PL--------------------\\" << endl;
        cout << "//--------------------PANEL       OPLATY--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "\n\n\n1 - Twoje naleznosci" << endl;
        cout << "2 - Twoje oplaty" << endl;
        cout << "3 - Rachunki otrzymane" << endl;
        cout << "4 - Rachunki wystawione" << endl;
        cout << "5 - Rachunki oplacone" << endl;
        cout << "6 - Rachunki nieoplacone" << endl;
        cout << "7 - Cofnij" << endl;
        cin >> wybor_;
        switch (wybor_) {
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
                petla_exit_ = true;
                break;
            }
            default:
                break;
        }
    }
};
