//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

//ponizej zalaczam dyrektywy
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

//zalaczam klasy
#include "klasa_uzytkownicy.hpp"

//zalaczam funnkcje dla klas
#include "funkcja_uzytkownicy_wczytaj_uzytkownika.hpp"
#include "funkcja_wczytaj_uzytkownika.hpp"
#include "funkcje_zwrotu_argumentow.hpp"
#include "funkcja_dodaj_uzytkownika.hpp"

void klasa_uzytkownicy::uzytkownicy_menu(klasa_uzytkownicy *uzytkownicy_wsk)
{
    int exit = 0;
    int wybor;
    fstream file;
    string file_name;
    string string_n;
    string temp_line;
    string string_char;
    string login__;
    string haslo__;
    bool login_sprawdz=false;
    bool haslo_sprawdz=false;
    bool exit_ = false;
    
    
    
    //wczytanie uzytkownikow z pliku
    file_name = "uzytkownicy";
    file.open(file_name+=".txt", ios::in);
    if (file.good()==false)
    {
        cout << "Nie znaleziono pliku zdanymi uzytkownikow" << endl;
        cout << "Sprawdz czy plik nie zostal usuniety" << endl;
        file.open("uzytkownicy.txt", ios::out | ios::app);
    }
    
    while(!file.eof())
    {
        getline(file, temp_line);
        cout << temp_line << endl;
        uzytkownicy_wsk -> wczytaj_uzytkownika_(temp_line);
    }
    file.close();
    
    while (exit == 0)
    {
        system("clear");
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------TWOJ  ARCHITEKT.PL--------------------\\" << endl;
        cout << "//--------------------PANEL    LOGOWANIA--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
        cout << "\n\n\n1 - Zaloguj" << endl;
        cout << "2 - Zaloz konto" << endl;
        cout << "3 - Zamknij program" << endl;
        
        cin >> wybor;
        system("clear");
    
        switch (wybor)
        {
                
            case 1:
                cout << "Podaj login: " << endl;
                cin >> login__;
                cout << "Podaj haslo: " << endl;
                cin >> haslo__;
                for (int i=0 ; i<uzytkownicy.size() ; i++)
                {
                    if (uzytkownicy[i] -> zwroc_login() == login__)
                    {
                        login_sprawdz = true;
                    }
                    if (uzytkownicy[i] -> zwroc_haslo() == haslo__)
                    {
                        haslo_sprawdz = true;
                    }
                }
                if (login_sprawdz == true && haslo_sprawdz == true)
                {
                    cout << "Zalogowano sie poprawnie" << endl;
                    exit = 1;
                }
                else
                {
                    cout << "Podano bledny login badz haslo" << endl;
                    cout << "Sproobuj ponownie, badz zaloz konto" << endl;
                    exit = 0;
                }
                break;
                
            case 2:
                dodaj_uzytkownika(uzytkownicy_wsk);
                break;
            
            case 3:
                exit_ = true;
                break;
                
            default:
                break;
        }
    }
    if (exit_ == true)
    {
        //exit(0);
    }
};
