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

#include "RaceCar.h"
namespace Exam1{

    //constructor
    // calls vehicle constructor
    //input:
    //      color - holds the color of the vehicle
    //output: Modifies values of instance
    RaceCar::RaceCar(string color): Vehicle(color){
        for (int i = 0; i < 4; i++){//adds 4 wheels to instance of 305mm radius 
            wheels.push_back(Wheel(305));
        }
    }

    //cout statement stating the race car does a burnout
    //input: NA
    //output: Cout statements
    void RaceCar::doABurnout(){
        cout << "SCREEEECH!!!  The RaceCar does a burnout and speeds off!\n" << endl;
    }

    //Returns a detailed description of the racecar including its color, topspeed, radius of wheels, number of wheels 
    //input: NA
    //output: Returns a string contains info about racecar
    string RaceCar::Description(){
        return "I am a " + _color + " RaceCar and I can go 250mph. I have " + std::to_string(wheels.size())  + " wheels each with a radius of " + wheels[0].getRadius() + "mm.";
    }
}