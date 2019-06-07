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
    Vehicle * Garage[3];//grarage of vehicles
    bool Catch = UNSAFE;//unsafe until try block is safe
    int resetCatch = 1;
    int seats;// holds number of seats a sedan vehicle has
    int pickupCap;//holds the capacity of pickups
    string pickupColor, raceCarColor, sedanColor;
    while(Catch != SAFE){//repeat try block until it is safe to proceed
        try{
            if(resetCatch == 1){//used to repeat only what has an invalid arguement
                cout << "What color is the RaceCar? ";
                cin >> raceCarColor;//get race car color
                Garage[0] = new RaceCar(raceCarColor, 305);//create new racecar with info provided
                resetCatch++;//this block safe increment catch by 1
            }
            if(resetCatch == 2){//used to repeat only what has an invalid arguement
                cout << "What color is the Pickup? ";
                cin >> pickupColor;//get pickup color
                cout << "How much weight (lbs) can the Pickup hual? ";
                cin >> pickupCap;//get capacity of pickup
                Garage[1] = new Pickup(pickupColor, pickupCap, 432);//create new pickup with info provided
                resetCatch++;//this block safe increment catch by 1
            }
            if(resetCatch == 3){//used to repeat only what has an invalid arguement
                cout << "What color is the Sedan? ";
                cin >> sedanColor;// get color of sedan
                cout << "How many seats does the Sedan have? ";
                cin >> seats;//gather number of seats in sedan
                Garage[2] = new Sedan(sedanColor, seats, 381);// create new sedan with info provided  
            }
            Catch = SAFE;//try block is safe       
        }
        catch (std::invalid_argument &x){//if an invalid arguement was passed into a class catch the invalid arguement
            cout << "Oops an error occurred the previous value entered is invalid." << endl;
        }
    }
    //The following loop iterates through Garage array and states a description of the vehicle and
    // calls the classes unique function
    for (int i = 0; i < 3; i++){
        cout << Garage[i]->Description() << endl;//description of vehicle
        if(typeid(*Garage[i]) == typeid(Pickup)){//if the vehicle is a pickup call its unique function
            dynamic_cast<Pickup*>(Garage[i])->addCurrentHual();
        }else if(typeid(*Garage[i]) == typeid(RaceCar)){//if the vehicle is a racecar call its unique function
            dynamic_cast<RaceCar*>(Garage[i])->doABurnout();
        }else if(typeid(*Garage[i]) == typeid(Sedan)){//if the vehicle is a sedan call its unique functions
            int numPassengers;
            cout << "How many passengers would you like to enter the Sedan? ";
            cin >> numPassengers;//gather number of passengers
            dynamic_cast<Sedan*>(Garage[i])->addPassenger(numPassengers);
            dynamic_cast<Sedan*>(Garage[i])->addBikeToRack();
        }
    }
}