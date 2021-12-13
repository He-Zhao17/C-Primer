//
// Created by Peko Kk. on 2021/12/13.
//

#include "One.h"
#include <iostream>



void T_1() {
    using namespace std;
    const int CunS = 100;
    cout << "Your height is ___\n";
    int h;
    cin >> h;
    int c = h/CunS;
    int cun = h%CunS;
    cout << "Your height is " << c << " and " << cun << endl;
}