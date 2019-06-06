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

#ifndef SEDAN_H
#define SEDAN_H

#include "Vehicle.h"
using std::string;
using std::cout;
using std::cin;

namespace Exam1{
    class Sedan : public Vehicle {
        private:
        int number_of_seats;
        int number_of_bikes;
        int number_of_passengers;
        public:
        Sedan(string color, int seats);
        void addBikeToRack();
        void addPassenger(int numPassengers);
        string Description();
    };
}
#endif // SEDAN_H