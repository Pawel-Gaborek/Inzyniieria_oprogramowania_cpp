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

klasa_uzytkownik::klasa_uzytkownik(string login_, string haslo_, int numer_id_)
{
    this -> login = login_;
    this -> haslo = haslo_;
    this -> numer_id = numer_id_;
};
