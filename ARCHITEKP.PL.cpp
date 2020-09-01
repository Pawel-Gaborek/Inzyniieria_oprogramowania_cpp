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
#include "klasa_twoje_dane.hpp"
#include "klasa_ustawienia.hpp"


//ponizej zalaczam pliki funkcji
#include "funkcja_uzytkownicy_menu.hpp"
#include "funkcja_uzytkownicy_wczytaj_uzytkownika.hpp"
#include "funkcja_uzytkownicy_konstruktor_bez_argumentow.hpp"
#include "funkcja_procesy_menu.hpp"
#include "funkcja_umowy_menu.hpp"
#include "funkcja_kalendarz_menu.hpp"
#include "funkcja_oplaty_menu.hpp"
#include "funkcja_rachunki_menu.hpp"
#include "funkcja_ogloszenia_menu.hpp"
#include "funkcja_historia_menu.hpp"
#include "funkcja_poczta_menu.hpp"
#include "funkcja_ustawienia.hpp"
//#include "funkcja_dane_menu.hpp"
#include "funkcja_dane.hpp"




using namespace std;
int main(int argc, const char * argv[])
{
    system("clear");
    bool exit = false;
    bool exit_ = false;
    int n;
    int liczba_znakow;
    int wybor;
    char continuation;
    char znak_do_znalezienia;
    klasa_uzytkownicy *uzytkownicy;
    
    
    cout << "Super ! Wlasnie uruchomiles program 'Twoj Architekt.pl'" << endl;
    cout << "Bedziesz mial mogl rozpoczac swoj proces inwestycyjny" << endl;
    cout << "Wybierz z ponizszych opcji i nacisnij klawiisz ENTER" << endl;
    
    sleep(3);
    system("clear");
    
    uzytkownicy = new klasa_uzytkownicy();
    uzytkownicy -> uzytkownicy_menu(uzytkownicy);
    
    cout << "Ladowanie systemu..............." << endl;
    sleep(2);
    
    
    while (exit == false)
    {
        while (exit_ == false)
        {
            system("clear");
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
            cout << "9 - Twoje dane" << endl;
            cout << "10 - Ustawienia" << endl;
            cout << "11 - Wyloguj / zamknij program" << endl;
            cin >> wybor;
            system("clear");
            
            switch (wybor)
            {
                case 1:
                {
                    klasa_procesy_inwestycyjne* procesy = new klasa_procesy_inwestycyjne();
                    procesy -> procesy_menu();
                    break;
                }
                    
                case 2:
                {
                    klasa_poczta *poczta = new klasa_poczta();
                    poczta -> poczta_menu();
                    break;
                }
                                   
                case 3:
                {
                    klasa_historia *historia = new klasa_historia();
                    historia -> historia_menu();
                    break;
                }
                    
                case 4:
                {
                    klasa_zlecenia_ogloszenia *ogloszenia = new klasa_zlecenia_ogloszenia;
                    ogloszenia -> ogloszenia_menu();
                    break;
                }
                    
                case 5:
                {
                    klasa_rachunki *rachunki = new klasa_rachunki;
                    rachunki -> rachunki_menu();
                    break;
                }
                    
                case 6:
                {
                    klasa_naleznosci_oplaty* oplaty = new klasa_naleznosci_oplaty();
                    oplaty -> oplaty_menu();
                    break;
                }
                    
                case 7:
                {
                    klasa_umowy* umowy = new klasa_umowy();
                    umowy -> umowy_menu();
                    break;
                }
                case 8:
                {
                    klasa_kalendarz* kalendarz = new klasa_kalendarz();
                    kalendarz -> kalendarz_menu();
                    break;
                }
                case 9:
                {
                    klasa_twoje_dane* twoje_dane = new klasa_twoje_dane();
                    twoje_dane -> dane_menu();
                    break;
                }
                case 10:
                {
                    klasa_ustawienia* ustawienia = new klasa_ustawienia();
                    ustawienia -> ustawienia_menu();
                    break;
                }
                case 11:
                {
                    exit_ = true;
                }
                default:
                {
                    break;
                }
                    
                  
            }
        }
        if (exit_ == true)
        {
            while (1)
            {
                system("clear");
                cout << "\nProgram wlasnie zakonczyl swoje dzialanie" << endl;
                cout << "Czy jestes pewien zamkniecia aplikacji?" << endl;
                cout << "Aby potwierdzic zamkniecie programu wpisz duza litere 'T'" << endl;
                cout << "oraz wcisnij klawisz ENTER" << endl;
                cin >> continuation;
                if (continuation == 'T')
                {
                    exit = true;
                    break;
                }
                else if (continuation == 'N')
                {
                    exit_ = false;
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
    }
    return 0;
};
