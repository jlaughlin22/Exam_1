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
#define SAFE true
#define UNSAFE false
using std::cout;
using std::endl;
using std::string;
using std::vector;
using namespace Exam1;

int main() {
    Vehicle * Garage[3];
    bool Catch = UNSAFE;
    int resetCatch = 1;
    int seats;
    int pickupCap;
    string pickupColor, raceCarColor, sedanColor;
    while(Catch != SAFE){
        try{
            if(resetCatch == 1){
                cout << "What color is the RaceCar? ";
                cin >> raceCarColor;
                Garage[0] = new RaceCar(raceCarColor);
                resetCatch++;
            }
            if(resetCatch == 2){
                cout << "\nWhat color is the Pickup? ";
                cin >> pickupColor;
                cout << "\nHow much weight (lbs) can the Pickup hual? ";
                cin >> pickupCap;
                Garage[1] = new Pickup(pickupColor, pickupCap);
                resetCatch++;
            }
            if(resetCatch == 3){
                cout << "\nWhat color is the Sedan? ";
                cin >> sedanColor;
                cout << "\nHow many Seats does the Sedan have? ";
                cin >> seats;
                Garage[2] = new Sedan(sedanColor, seats);   
            }
            Catch = SAFE;         
        }
        catch (std::invalid_argument &x){
            cout << "Oops an error occurred the previous value entered is invalid." << endl;
        }
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