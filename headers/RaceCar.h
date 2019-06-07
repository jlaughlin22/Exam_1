///////////////////////////////////////////////////////
// Exam 1
//CS273
//Author: Jonathan Laughlin
//Date created: 6/6/19
//Date Last Modified: 6/7/19
//Professor: Pete Tucker
// This code contains my code for Exam 1 for CS273
///////////////////////////////////////////////////////

//I affirm that all code given below was written solely by me, <Jonathan Laughlin>, and that any help I received adhered to the rules stated for this exam.

#ifndef RACECAR_H
#define RACECAR_H
#include "Vehicle.h"
using std::string;
using std::endl;
using std::cout;

namespace Exam1{
    class RaceCar : public Vehicle {
        public:

        //constructor
        // calls vehicle constructor
        //input:
        //      color - holds the color of the vehicle
        //      rimRadius - holds the radius of the wheels
        //output: Modifies values of instance
        RaceCar(string color, int rimRadius);

        //cout statement stating the race car does a burnout
        //input: NA
        //output: Cout statements
        void doABurnout();

        //Returns a detailed description of the racecar including its color, topspeed, radius of wheels, number of wheels 
        //input: NA
        //output: Returns a string contains info about racecar
        string Description();
    };
}
#endif // RACECAR_H