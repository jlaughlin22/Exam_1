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

#ifndef PICKUP_H
#define PICKUP_H
#include <iostream>
#include "Vehicle.h"
using std::string;

class Pickup : public Vehicle {
    private:
        int hauling_capacity;
    public:
        Pickup(string color, int capacity);
        string Description();
//Top speed: 85mph

//Wheel radius: 432mm

};

#endif // PICKUP_H