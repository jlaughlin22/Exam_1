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
    //constructor 
    //sets value of seats for instance of sedan and class the vehicle class constructor
    //input: 
    //      color - holds the color of the vehicle
    //      seats - hold sthe number of seats the sedan has
    //      rimRadius - holds the radius of the wheels
    //output: sets values of number_of_seats
    Sedan::Sedan(string color, int seats, int rimRadius): number_of_seats(seats), Vehicle(color){
        if(number_of_seats <= 0){//cant have 0 or less seats in a car
            throw invalid_argument("There are no seats in the car!");
        }
        for (int i = 0; i < 4; i++){// adds 4 wheels of rimRadius mm  to instance of sedan
            wheels.push_back(Wheel(rimRadius));
        }
    };
    
    //adds passengers to sedan
    //input: numPassengers - initial passengers entered
    //output: cout statements
    void Sedan::addPassenger(int numPassengers){
        number_of_passengers = numPassengers;
        while(number_of_passengers > number_of_seats && number_of_passengers < 0){//keeps gathering number of passengers until a corret value is entered
            if(number_of_passengers > 0){//if more then 0 passengers then greater then number of seats
                cout << "There are not enough seats in the Sedan for that many passengers! How many passengers would you like to enter the Sedan (max number of passengers is " << number_of_seats << ")? ";
            }else{//else negative passengers were entered
                cout << "Oops you can't have a negative number of passengersHow many passengers would you like to enter the Sedan (min number of passengers is 0)? ";
            }
            cin >> number_of_passengers;// gather number of passengers
        }
        if(number_of_passengers == 0){//if no passengers enter sedan
            cout << "No passengers entered the Sedan.";
        }else{//if 1 or more enter sedan
            cout << number_of_passengers << " passengers have just entered the Sedan.\n";
        }
    }

    //states how many bikes were added to the bike rack
    //input: NA
    //output: cout statement
    void Sedan::addBikeToRack(){
        number_of_bikes = number_of_passengers/2;
        if(number_of_bikes != 0){
            cout << number_of_bikes << " of the passengers placed a bike on the bike rack attached to the Sedan.\n";
        }
    }

    //Returns a detailed description of the sedan including its color, topspeed, number of seats, radius of wheels, number of wheels 
    //input: NA
    //output: Returns a string contains info about sedan
    string Sedan::Description(){
        return "\nI am a " + _color + " Sedan and I can go 95mph. I have " + std::to_string(number_of_seats) + " seats and " + std::to_string(wheels.size())  + " wheels each with a radius of " + wheels[0].getRadius() + "mm.";
    }
}