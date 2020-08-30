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

//zalaczam klasy
#include "klasa_uzytkownicy.hpp"

//zalaczam funnkcje dla klas
#include "funkcja_uzytkownicy_wczytaj_uzytkownika.hpp"
#include "funkcja_wczytaj_uzytkownika.hpp"

void klasa_uzytkownicy::uzytkownicy_menu(klasa_uzytkownicy *uzytkownicy_wsk)
{
    int exit = 0;
    int wybor;
    fstream file;
    string file_name;
    string string_n;
    string temp_line;
    string string_char;
    
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
    
    system("clear");
    cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
    cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
    cout << "//--------------------TWOJ  ARCHITEKT.PL--------------------\\" << endl;
    cout << "//--------------------PANEL    LOGOWANIA--------------------\\" << endl;
    cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
    cout << "//--------------------<<<<<<<<<>>>>>>>>>--------------------\\" << endl;
    cout << "\n\n\n1 - Zaloguj" << endl;
    cout << "2 - Zaloz konto" << endl;
    
    
    
    
    
    
    cin >> wybor;
    system("clear");
    
    while (exit == 0)
    {
        
        while(1)
        {
            
        }
    }
    
};
