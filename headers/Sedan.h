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
        int number_of_seats;//holds the number of seats the sedan has
        int number_of_bikes;//holds the numbe rof bikes attacked to bike rack on sedan
        int number_of_passengers;//holds the number of passengers

        public:
        //constructor 
        //sets value of seats for instance of sedan and class the vehicle class constructor
        //input: 
        //      color - holds the color of the vehicle
        //      seats - hold sthe number of seats the sedan has
        //output: sets values of number_of_seats
        Sedan(string color, int seats);

        //states how many bikes were added to the bike rack
        //input: NA
        //output: cout statement
        void addBikeToRack();

        //adds passengers to sedan
        //input: numPassengers - initial passengers entered
        //output: cout statements
        void addPassenger(int numPassengers);

        //Returns a detailed description of the sedan including its color, topspeed, number of seats, radius of wheels, number of wheels 
        //input: NA
        //output: Returns a string contains info about sedan
        string Description();
    };
}
#endif // SEDAN_H