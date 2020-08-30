//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

//ponizej zalaczam dyrektywy
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>
#include "term.h"

//ponizej zalaczam pliki klas
#include "klasa_uzytkownik.hpp"
#include "klasa_uzytkownicy.hpp"
#include "klasa_procesy_inwestycyjne.hpp"
#include "klasa_poczta.hpp"
#include "klasa_historia.hpp"
#include "klasa_zlecenia_ogloszenia.hpp"
#include "klasa_rachunki.hpp"
#include "klasa_naleznosci_oplaty.hpp"
#include "klasa_umowy.hpp"
#include "klasa_kalendarz.hpp"


//ponizej zalaczam pliki funkcji
#include "funkcja_uzytkownicy_menu.hpp"
#include "funkcja_uzytkownicy_wczytaj_uzytkownika.hpp"
#include "funkcja_uzytkownicy_konstruktor_bez_argumentow.hpp"

using namespace std;
int main(int argc, const char * argv[])
{
    system("clear");
    int exit = 0;
    int n;
    int liczba_znakow;
    int wybor;
    char continuation;
    char znak_do_znalezienia;
    klasa_uzytkownicy *uzytkownicy;
    
    
    cout << "Super ! Wlasnie uruchomiles program 'Twoj Architekt.pl'" << endl;
    cout << "Bedziesz mial mogl rozpoczac swoj proces inwestycyjny" << endl;
    cout << "Wybierz z ponizszych opcji i nacisnij klawiisz ENTER" << endl;
    
    sleep(5);
    system("clear");
    
    uzytkownicy = new klasa_uzytkownicy();
    uzytkownicy -> uzytkownicy_menu(uzytkownicy);
    
    sleep(1);
    
    while (exit == 0)
    {
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------GLOWNE        MENU--------------------\\" << endl;
        cout << "//--------------------TWOJ  ARCHITEKT.PL--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "\n\n\n1 - Procesy inwestycyjne" << endl;
        cout << "2 - Poczta" << endl;
        cout << "3 - Historia operacji" << endl;
        cout << "4 - Zlecenia / ogloszenia" << endl;
        cout << "5 - Rachunki" << endl;
        cout << "6 - Naleznosci / oplaty" << endl;
        cout << "7 - Umowy" << endl;
        cout << "8 - Kalendarz" << endl;
        cout << "9 - Faktury / rachunki" << endl;
        cin >> wybor;
        system("clear");
        
        switch (wybor)
        {
            case 1:
                break;
                
            case 2:
                break;
                
            case 3:
                break;
                
            case 4:
                break;
                
            case 5:
                break;
                
            case 6:
                break;
                
            case 7:
                break;
                
            case 8:
                break;
                
            case 9:
                break;
                
            default:
                break;
        }
        while (1)
        {
            cout << "\nProgram wlasnie zakonczyl swoje dziialanie" << endl;
            cout << "Czy jestes pewien zamkniecia aplikacji?" << endl;
            cout << "Aby potwierdzic zamkniecie programu wpisz duza litere 'T'" << endl;
            cout << "oraz wcisnij klawisz ENTER" << endl;
            cin >> continuation;
            if (continuation == 'T')
            {
                break;
            }
            else
            {
                cout << "Podales bledny znak" << endl;
                cout << "Podaj prawidlowy znak, a nastepnie wcisnij klawisz ENTER" << endl;
            }
            cout << "Wlasnie zamknieto aplikacje 'Twoj Architekt.pl'" << endl;
            cout << "Powodzenia" << endl;
        }
        
    }
    return 0;
};
