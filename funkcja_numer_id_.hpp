//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

//ponizej zalaczam dyrektywy
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stdio.h>


using namespace std;

int numer_id_(string string_temp)
{
    int dlugosc_do_spacji;
    int numer_id=0;
    char buffer[256];
    dlugosc_do_spacji = string_temp.find(' ');
    string_temp.erase(0, dlugosc_do_spacji+1);
    dlugosc_do_spacji = string_temp.find(' ');
    string_temp.erase(0, dlugosc_do_spacji+1);
    cout << string_temp << endl;
    numer_id = stoi(string_temp);
    return numer_id;
    //return string_temp;
};
