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

    //constructor
    //sets values of capacity and calls vehicle constructor
    //input: 
    //      color - holds the color of the vehicle
    //      capacity - holds the hauling capacity of the truck
    //output: editing of values ofr instance
    Pickup::Pickup(string color, int capacity): hauling_capacity(capacity), Vehicle(color){
        if(capacity < 0){//pickup cant have a negative hauling capacity
            throw invalid_argument("The truck can not have negative carrying capacity.");//throw an invalid arguement
        }
        for (int i = 0; i < 4; i++){//adds 4 wheels of 432mm radius
            wheels.push_back(Wheel(432));
        }
    };

    //Returns a detailed description of the pickup including its color, topspeed, radius of wheels, number of wheels 
    //input: NA
    //output: Returns a string contains info about pickup
    string Pickup::Description(){
        return "I am a " + _color + " Pickup and I can go 85mph. I have " + std::to_string(wheels.size())  + " wheels each with a radius of " + wheels[0].getRadius() + "mm.";
    }

    //Changes what the pickup is currently hauling 
    //input: NA
    //output: cout statements
    void Pickup::addCurrentHual(){
        cout << "Enter what the Pickup is hauling: ";
        cin >> currentlyHauling;
        cout << "The Pickup is now hauling " << currentlyHauling << ".\n\n";
    }
}