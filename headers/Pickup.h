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
#include "Vehicle.h"
using std::string;
using std::cout;
using std::cin;

namespace Exam1{
    class Pickup : public Vehicle {
        private:
        int hauling_capacity;
        string currentlyHauling;
        public:
        Pickup(string color, int capacity);
        void addCurrentHual();
        string Description();
    };
}
#endif // PICKUP_H