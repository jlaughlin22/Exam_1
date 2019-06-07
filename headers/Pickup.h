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

#ifndef PICKUP_H
#define PICKUP_H
#include "Vehicle.h"
using std::string;
using std::cout;
using std::cin;

namespace Exam1{
    class Pickup : public Vehicle {
        private:
        int hauling_capacity;//amount of weight in lbs that the pickup can haul
        string currentlyHauling;//holds what the pickup is currently hauling 

        public:
        //constructor
        //sets values of capacity and calls vehicle constructor
        //input: 
        //      color - holds the color of the vehicle
        //      capacity - holds the hauling capacity of the truck
        //      rimRadius - holds the radius of the wheels
        //output: editing of values ofr instance
        Pickup(string color, int capacity, int rimRadius);

        //Changes what the pickup is currently hauling 
        //input: NA
        //output: cout statements
        void addCurrentHual();

        //Returns a detailed description of the pickup including its color, topspeed, radius of wheels, number of wheels 
        //input: NA
        //output: Returns a string contains info about pickup
        string Description();
    };
}
#endif // PICKUP_H