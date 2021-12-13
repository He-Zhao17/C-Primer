//
// Created by Peko Kk. on 2021/12/13.
//

#include "T_2.h"

#include <iostream>
#include <cmath>



void T_2() {
    using namespace std;
    const int Chi2Cun = 12;
    const float Cun2M = 0.0254;
    const float Bang2Kg = 1/2.2;
    cout << "Please input your height. Your height is __ Chi ";
    int Chis;
    cin >> Chis;
    cout << "and __ cuns.";
    int Cuns;
    cin >> Cuns;
    cout << "Your tizhong is __ Bangs.";
    float Bangs;
    cin >> Bangs;
    float Ms = (Chis * 12 + Cuns) * 0.0254;
    float Kgs = Bangs / 2.2;
    float BMI = Kgs / (pow(Ms, 2));
    cout << "Your BMI is " << BMI << endl;
}
