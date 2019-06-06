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
#include "Sedan.h"
namespace Exam1{
    Sedan::Sedan(string color, int seats): number_of_seats(seats), Vehicle(color){};

    string Sedan::Description(){
        return "This is a Sedan.";
    }
}