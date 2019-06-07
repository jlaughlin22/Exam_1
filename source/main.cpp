///////////////////////////////////////////////////////
// Exam 1
//CS273
//Author: Jonathan Laughlin
//Date created: 6/6/19
//Date Last Modified: 6/6/19
//Professor: Pete Tucker
// This code contains my code for Exam 1 for CS273
///////////////////////////////////////////////////////

//I affirm that all code given below was written solely by me, <Jonathan Laughlin>, and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <stdexcept>
#include "Vehicle.h"
#include "RaceCar.h"
#include "Pickup.h"
#include "Sedan.h"
using std::cout;
using std::endl;
using std::string;
using std::vector;
using namespace Exam1;

// STEP 2: Define the RaceCar, Sedan, and Pickup classes as described
// in the UML diagram. Make sure to add functionality unique to each kind of class.
// Be sure to use a separate header file and a CPP file for each class.

int main() {
    Vehicle * Garage[3];
    try{
        Garage[0] = new RaceCar("Red");
        Garage[1] = new Pickup("Green", 500);
        Garage[2] = new Sedan("Blue", 10);
    }
    catch (std::invalid_argument &x){
        cout << "Oops an error occurred there is an invalid arguement somewhere." << endl;
        return 0;
    }
    for (int i = 0; i < 3; i++){
        cout << Garage[i]->Description() << endl;
        if(typeid(*Garage[i]) == typeid(Pickup)){
            dynamic_cast<Pickup*>(Garage[i])->addCurrentHual();
        }else if(typeid(*Garage[i]) == typeid(RaceCar)){
            dynamic_cast<RaceCar*>(Garage[i])->doABurnout();
        }else if(typeid(*Garage[i]) == typeid(Sedan)){
            int numPassengers;
            cout << "How many passengers would you like to enter the Sedan? ";
            cin >> numPassengers;
            dynamic_cast<Sedan*>(Garage[i])->addPassenger(numPassengers);
            dynamic_cast<Sedan*>(Garage[i])->addBikeToRack();
        }
    }
    
}