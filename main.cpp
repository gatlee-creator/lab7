#include "automobile.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    automobileType car1; 

    car1.setProperties(0, 22, 17.5);
    //cout << car1.getInfoString() << endl;

    car1.drive(25);
    //cout << car1.getInfoString() << endl;

    for(int i = 0; i < 10; i++)
        car1.drive(20);

    //cout << car1.getInfoString() << endl;

    automobileType car2(2500, 19.2, 13.2);

    car2.drive(450);
    cout << car2.getInfoString() << endl;

    return 0;
}