/*
    Implementation of the automobileType class. Contains member variables
    and member functions for the automobileType. 
*/
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
    int pos; 

      //convert int members to strings
    odmtr = to_string((int)odemeter);
    fuelLevel = to_string(fuel); 
    effo = to_string(efficiency);

    //now we want to modify strings length to show 2 decimal places
    pos = fuelLevel.find_first_of(".");
    fuelLevel = fuelLevel.erase(pos + 3, fuelLevel.length()); //not using this correct

    pos = effo.find_first_of(".");
    effo = effo.erase(pos + 3, fuelLevel.length());
    

      //concat those strings into a larger string
    automobileStatus = "Miles = " + odmtr +     " " + 
                       "Fuel = "  + fuelLevel + " " +
                       "Efficiency = " + effo; 

    return automobileStatus;
}

void automobileType::drive(float milesTrav){
    float gallonsUsed;

      //first do a 0 miles check
    if(milesTrav <= 0)
        return; 
    
     //do a formula to figure how many gallons we used 
     gallonsUsed = (1 / efficiency) * milesTrav; 

      //if the fuel level goes below 0 then we're out of gas 
    if((fuel - gallonsUsed) <= 0)
        fuel = 0;
    else
        fuel -= gallonsUsed; //subtract gallons used from our fuel

    odemeter += milesTrav; //add this vechile has traveled to the odemeter
 
}

//default constructor
automobileType::automobileType(){
  odemeter = 0;
  fuel = 0;
  efficiency = 0;
}

//constructor that takes params 
automobileType::automobileType(float odmtr, float fuelLevel, float effo){
  setProperties(odmtr, fuelLevel, effo);
}