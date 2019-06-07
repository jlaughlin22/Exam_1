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

#include "Wheel.h"
namespace Exam1{

    //constructor
    //modifies _radius value of instance
    //input: radius - contains the radus of the wheel
    //output: modifies _radius value
    Wheel::Wheel(int radius) {
        if( radius <= 0 ){//cant have a radius of 0 or less then 0
            throw std::invalid_argument("Wheel does not exist!");
        } 
        _radius = radius; 
    }

    //returns the radius of the wheel as a string
    //input: NA
    //output: returns a string containing the radius of the wheel
    string Wheel::getRadius(){
        return std::to_string(_radius);
    }
}