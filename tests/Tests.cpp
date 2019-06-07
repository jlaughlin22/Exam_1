///////////////////////////////////////////////////////
// Exam 1
//CS273
//Author: Jonathan Laughlin
//Date created: 6/6/19
//Date Last Modified: 6/7/19
//Professor: Pete Tucker
// This code contains my code for Exam 1 for CS273
///////////////////////////////////////////////////////

/* //uncomment tests to build them

#include "Pickup.h"
#include "RaceCar.h"
#include "Sedan.h"
#include "Vehicle.h"
#include "Wheel.h"
#include "gtest/gtest.h"
#include <iostream>
#include <fstream>
using std::invalid_argument;

//Tests Wheel class when zero is entered for the radius of the wheels
TEST(WheelsTest, ZeroRadius){//Wheel Test 1
    auto func = []() { 
        Exam1::Wheel(0);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

//Tests Wheel class when a negative number is entered for the radius of the wheels
TEST(WheelsTest, NegRadius){//Wheel test 2
    auto func = []() { 
        Exam1::Wheel(-35);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

//Tests raceCar class when a negative number is entered for the radius of the wheels
TEST(RaceCarTest, negRimRadius){//RaceCar Test 1
    auto func = []() {
        Exam1::RaceCar("blue", -15);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

//Tests sedan class when a zero number of seats is entered
TEST(SedanTests, ZeroSeats){//Sedan Test 1
    auto func = []() { 
        Exam1::Sedan("red", 0, 10);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

//Tests sedan class when a negative number of seats is entered
TEST(SedanTests, NegSeats){// Sedan test 2
    auto func = []() { 
        Exam1::Sedan("red", -56, 10);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

//Tests Sedan class when a negative number is entered for the radius of the wheels
TEST(SedanTests, NegWheelRad){// Sedan test 3
    auto func = []() { 
        Exam1::Sedan("red", 5, -7);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

//Tests pickup class when a negative number is entered for the hauilg capacity of the pickup
TEST(PickupTest, NegativeCapacity){// Pickup Test 1
    auto func = []() { 
        Exam1::Pickup("red", -3, 10);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

//Tests pickup class when a negative number is entered for the radius of the wheels
TEST(PickupTest, NegativeWheelRadius){// Pickup Test 2
    auto func = []() { 
        Exam1::Pickup("red", 10, -10);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
*/