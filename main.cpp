#include "automobile.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    automobileType car1; 

    car1.setProperties(0, 50, 17.5);
    cout << car1.getInfoString() << endl;

    car1.drive(25);
    cout << car1.getInfoString() << endl;


    return 0;
}