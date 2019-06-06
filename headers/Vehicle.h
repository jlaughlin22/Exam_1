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

// STEP 1: Complete the implementation of the Vehicle base class

// as described in the UML diagram

#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <vector>
#include "Wheel.h"
using std::string;
using std::vector;

namespace Exam1{
    class Vehicle{
        protected:
        string _color;
        int _topspeed;
        vector<Wheel> wheels;
        public:
        Vehicle(string color);
        virtual string Description() = 0;

    };
}
#endif // VEHICLE_H
