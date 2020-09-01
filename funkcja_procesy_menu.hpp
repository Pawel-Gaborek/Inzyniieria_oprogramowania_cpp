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
#include "klasa_procesy_inwestycyjne.hpp"
#include "inne_zwoc_wrtosc_wyboru.hpp"
#include "klasa_uzytkownicy.hpp"
#include "klasa_uzytkownik.hpp"

using namespace std;

void klasa_procesy_inwestycyjne::procesy_menu()
{
    bool petla_exit = false;
    bool petla_exit_ = false;
    int wybor_;
    
    
     

    while (petla_exit_ != true)
    {
        system("clear");
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------TWOJ  ARCHITEKT.PL--------------------\\" << endl;
        cout << "//--------------------PANEL      PROCESY--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "\n\n\n1 - Twoje procesy" << endl;
        cout << "2 - Utworz proces" << endl;
        cout << "3 - Historia procesow" << endl;
        cout << "4 - Procesy usuniete" << endl;
        cout << "5 - Procesy biezace" << endl;
        cout << "6 - Procesy zakonczone" << endl;
        cout << "7 - Wystaw ocene uslugodawcy" << endl;
        cout << "8 - Cofnij" << endl;
        cin >> wybor_;
        system("clear");
        //while(! isdigit(wybor))
        //{
        //    cin >> wybor;
        //}
            
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
                petla_exit_ = true;
                break;
            }
        }
    }
};
