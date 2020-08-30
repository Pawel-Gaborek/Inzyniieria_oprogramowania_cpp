//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

//ponizej zalaczam dyrektywy
#include <iostream>
#include "klasa_uzytkownik.hpp"

using namespace std;

string klasa_uzytkownik::zwroc_login()
{
    return login;
};


string klasa_uzytkownik::zwroc_haslo()
{
    return haslo;
}
