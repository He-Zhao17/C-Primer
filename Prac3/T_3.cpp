//
// Created by Peko Kk. on 2021/12/13.
//

#include "T_3.h"
#include <cmath>
#include <iostream>;

void T_3() {
    using namespace std;
    const int hs = 60;
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    int d;
    cin >> d;
    cout << "\nNext, enter the minutes of arc: ";
    int m;
    cin >>m;
    cout << "\nFinally, enter the seconds of arac: ";
    int s;
    cin >> s;
    float mf = float(m) + float(s)/60;
    float df = float(d) + float(m)/60;
    cout << d << " degrees, " << m << "minutes, " << s << "seconds = " << df << " degrees.";
}
