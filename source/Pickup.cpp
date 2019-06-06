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

#include "Pickup.h"

namespace Exam1{
    Pickup::Pickup(string color, int capacity): hauling_capacity(capacity), Vehicle(color){
        for (int i = 0; i < 4; i++){
            wheels.push_back(Wheel(432));
        }
    };

    string Pickup::Description(){
        return "I am a " + _color + " Pickup and I can go 85mph. I have " + std::to_string(wheels.size())  + " wheels each with a radius of " + wheels[0].getRadius() + "mm.";
    }

    void Pickup::addCurrentHual(){
        cout << "Enter what the Pickup is hauling: ";
        cin >> currentlyHauling;
        cout << "The Pickup is now hauling " << currentlyHauling << ".\n\n";
    }
}