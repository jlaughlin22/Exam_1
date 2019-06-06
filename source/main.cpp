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
    // STEP 3: Assign ONE RaceCar, ONE Sedan, AND ONE Pickup object to each of the elements
    // in the Garage array. Remember the classes are defined in the namespace Exam1.

    //Garage[0] = ???

    //Garage[1] = ???

    //Garage[2] = ???
    Vehicle * Garage[3];
    Garage[0] = new RaceCar("Red");
    Garage[1] = new Pickup("Green", 500);
    Garage[2] = new Sedan("Blue", 8);
    

    for (int i = 0; i < 3; i++)
        cout << Garage[i]->Description() << endl;
    {

    // The method Description() should display an output like

    // "I am a red sedan (or racecar/pickup) and I can go 95 (or 250 or 85) mph"

    

    // add code to execute the "special" functionality of each class

    }
}