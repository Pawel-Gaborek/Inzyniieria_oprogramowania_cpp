//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

#ifndef klasa_uzytkownicy_hpp
#define klasa_uzytkownicy_hpp

//ponizej zalaczam dyrektywy
#include <iostream>

//ponizeej zalaczam klasy
#include "klasa_uzytkownik.hpp"

using namespace std;

class klasa_uzytkownicy
{
    
private:
    vector<klasa_uzytkownik>*uzytkownicy;
    
protected:
public:
    void uzytkownicy_menu();
    
};


#endif 
