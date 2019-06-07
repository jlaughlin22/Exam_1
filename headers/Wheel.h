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
#ifndef WHEEL_H
#define WHEEL_H
#include <iostream>
#include <stdexcept>
using std::string;
using std::invalid_argument;

namespace Exam1{
    class Wheel{
        private:
        int _radius;// holds radius of wheel in mm
        public:
        //constructor
        //modifies _radius value of instance
        //input: radius - contains the radus of the wheel
        //output: modifies _radius value
        Wheel(int radius);

        //returns the radius of the wheel as a string
        //input: NA
        //output: returns a string containing the radius of the wheel
        string getRadius();
    };
}
#endif // WHEEL_H