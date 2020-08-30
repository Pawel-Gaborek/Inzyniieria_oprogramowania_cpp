//
//  main.cpp
//  ARCHITEKP.PL
//
//  Created by Pawel Gaborek on 28/08/2020.
//  Copyright © 2020 Pawel Gaborek. All rights reserved.
//

//ponizej zalaczam dyrektywy
#include <iostream>
#include <string>

using namespace std;

string login_(string string_temp)
{
    string login;
    string_temp.erase(string_temp.find(' '), string_temp.length());
    return string_temp;
};
