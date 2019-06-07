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
    Sedan::Sedan(string color, int seats): number_of_seats(seats), Vehicle(color){
        if(number_of_seats <= 0){
            throw invalid_argument("There are no seats in the car!");
        }
        for (int i = 0; i < 4; i++){
            wheels.push_back(Wheel(381));
        }
    };
    
    void Sedan::addPassenger(int numPassengers){
        number_of_passengers = numPassengers;
        while(number_of_passengers > number_of_seats && number_of_passengers <= 0){
            cout << "There are not enough seats in the Sedan for that many passengers! How many passengers would you like to enter the Sedan (max number of passengers is " << number_of_seats << ")? ";
            cin >> number_of_passengers;
        }
        cout << number_of_passengers << " passengers have just entered the Sedan.\n";
    }
    void Sedan::addBikeToRack(){
        if(number_of_passengers/2 != 0){
            cout << number_of_passengers/2 << " of the passengers placed a bike on the bike rack attached to the Sedan.\n";
        }
    }

    string Sedan::Description(){
        return "I am a " + _color + " Sedan and I can go 95mph. I have " + std::to_string(number_of_seats) + " seats and " + std::to_string(wheels.size())  + " wheels each with a radius of " + wheels[0].getRadius() + "mm.";
    }
}