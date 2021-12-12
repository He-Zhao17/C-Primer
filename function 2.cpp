//
// Created by Peko Kk. on 2021/12/12.
//
#include <cmath>
#include <iostream>

int main()
{
    using namespace std;
    double area;
    cout << "Please Enter the floor area: ";
    cin >> area;
    cout << "Now we can caculate the side of the floor,";
    double side;
    side = sqrt(area);
    cout << side;
    return 0;
}
