/*//uncomment tests to build them

#include "Pickup.h"
#include "RaceCar.h"
#include "Sedan.h"
#include "Vehicle.h"
#include "Wheel.h"
#include "gtest/gtest.h"
#include <iostream>
#include <fstream>
using std::invalid_argument;

TEST(WheelsTest, ZeroRadius){
    auto func = []() { 
        Exam1::Wheel(0);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

TEST(WheelsTest, NegRadius){
    auto func = []() { 
        Exam1::Wheel(-35);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

TEST(RaceCarTest, negRimRadius){
    auto func = []() {
        Exam1::RaceCar("blue", -15);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

TEST(SedanTests, ZeroSeats){
    auto func = []() { 
        Exam1::Sedan("red", 0, 10);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

TEST(SedanTests, NegSeats){
    auto func = []() { 
        Exam1::Sedan("red", -56, 10);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

TEST(SedanTests, NegWheelRad){
    auto func = []() { 
        Exam1::Sedan("red", 5, -7);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

TEST(PickupTest, NegativeCapacity){
    auto func = []() { 
        Exam1::Pickup("red", -3, 10);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

TEST(PickupTest, NegativeWheelRadius){
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