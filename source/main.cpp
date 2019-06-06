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


#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Wheel

{

private:

int _radius;

public:

Wheel(int radius) { _radius = radius; }

};

// STEP 1: Complete the implementation of the Vehicle base class

// as described in the UML diagram

class Vehicle

{

protected:

string _color;

int _topspeed;

vector<Wheel> wheels;

public:

Vehicle(string color) {

// Complete the implementation

}

virtual string Description() = 0;

};

// STEP 2: Define the RaceCar, Sedan, and Pickup classes as described

// in the UML diagram. Make sure to add functionality unique to each kind of class.

// Be sure to use a separate header file and a CPP file for each class.

class RaceCar : public Vehicle {

//Top speed: 250mph

//Wheel radius: 305mm

};

class Sedan : public Vehicle {

//Top speed: 95mph

//Wheel radius: 381mm

};

class Pickup : public Vehicle {

//Top speed: 85mph

//Wheel radius: 432mm

};

int main()

{

Vehicle * Garage[3];

// STEP 3: Assign ONE RaceCar, ONE Sedan, AND ONE Pickup object to each of the elements

// in the Garage array. Remember the classes are defined in the namespace Exam1.

//Garage[0] = ???

//Garage[1] = ???

//Garage[2] = ???

for (int i = 0; i < 3; ++i)

{

// The method Description() should display an output like

// "I am a red sedan (or racecar/pickup) and I can go 95 (or 250 or 85) mph"

cout << Garage[i]->Description();

// add code to execute the "special" functionality of each class

}

}