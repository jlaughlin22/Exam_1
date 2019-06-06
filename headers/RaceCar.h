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

#ifndef RACECAR_H
#define RACECAR_H
#include "Vehicle.h"
using std::string;
using std::endl;
using std::cout;

namespace Exam1{
    class RaceCar : public Vehicle {
        public:
        RaceCar(string color);
        void doABurnout();
        string Description();
    };
}
#endif // RACECAR_H