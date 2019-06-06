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

#include "Wheel.h"
namespace Exam1{
    Wheel::Wheel(int radius) { _radius = radius; }

    string Wheel::getRadius(){
        return std::to_string(_radius);
    }
}