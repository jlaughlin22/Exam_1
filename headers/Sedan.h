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
#include <iostream>
#include "Vehicle.h"
using std::string;

class Sedan : public Vehicle {

    private:
        int number_of_seats;
    public:
        Sedan(string color, int seats);
        string Description();

//Top speed: 95mph

//Wheel radius: 381mm

};

#endif // SEDAN_H