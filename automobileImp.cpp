#include "automobile.h"
#include <string>

using namespace std;

void automobileType::setProperties(float odmtr, float fuelLevel, float effo){
    const int minThres = 0; 
      //check if all 3 are less than 0. If not then we set them to param value 
    odmtr < minThres ? odemeter=0 : odemeter=odmtr; 
    fuel < minThres ? fuel=0 : fuel=fuelLevel; 
    effo < minThres ? efficiency=0 : efficiency=effo;
}

string automobileType::getInfoString() const{
    string automobileStatus; 
    string fuelLevel, odmtr, effo;

      //convert int members to strings
    odmtr = to_string(odemeter);
    fuelLevel = to_string(fuel); 
    effo = to_string(efficiency);

      //concat those strings into a larger string
    automobileStatus = "Miles = " + odmtr + " Fuel = " + fuelLevel + 
                       " Efficiency = " + effo; 

    return automobileStatus;
}

void automobileType::drive(float miles){
    float gallonsUsed;
      //first do a 0 miles check
    if(miles <= 0)
        return; 
    
     //do a formula to figure how much gas we used 
     gallonsUsed = miles / efficiency; 
     fuel -= gallonsUsed;

      //if the fuel level goes below 0 then we're out of gas 
    // if(fuel -= gallonsUsed <= 0)
    //     return; 
    // else
    //     fuel -= gallonsUsed; //subtract gallons used from our fuel

    odemeter += miles; //add this vechile has traveled to the odemeter
 
}