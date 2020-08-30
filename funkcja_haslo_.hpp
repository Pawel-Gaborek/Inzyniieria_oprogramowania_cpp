//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

//ponizej zalaczam dyrektywy
#include <iostream>

using namespace std;

string haslo_(string string_temp)
{
    int dlugosc_do_spacji;
    dlugosc_do_spacji = string_temp.find(' ');
    string_temp.erase(0, dlugosc_do_spacji+1);
    return string_temp;
};
