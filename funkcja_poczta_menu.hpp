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
#include "klasa_poczta.hpp"
#include "inne_zwoc_wrtosc_wyboru.hpp"
#include "klasa_uzytkownicy.hpp"
#include "klasa_uzytkownik.hpp"

using namespace std;

void klasa_poczta::poczta_menu()
{
    
    bool petla_exit_ = false;
    int wybor_;
    system("clear");
    
    while (petla_exit_ != true)
    {
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------TWOJ  ARCHITEKT.PL--------------------\\" << endl;
        cout << "//--------------------PANEL       POCZTA--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "\n\n\n1 - Twoje skrzynki pocztowe" << endl;
        cout << "2 - Wiadomosci odebrane" << endl;
        cout << "3 - Wiadomosci wyslane" << endl;
        cout << "4 - Wiadomosci usuniete" << endl;
        cout << "5 - Wersje robocze" << endl;
        cout << "6 - Cofnij" << endl;
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
                petla_exit_ = true;
                break;
            }
        }
    }
};
