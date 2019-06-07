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
//using namespace Exam1;

TEST(SedanTests, ZeroSeats){
    auto func = []() { 
        Exam1::Sedan("red", 0);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

TEST(WheelsTest, ZeroRadius){
    auto func = []() { 
        Exam1::Wheel(0);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

TEST(PickupTest, NegativeCapacity){
    auto func = []() { 
        Exam1::Pickup("red", -3);
    };
    ASSERT_THROW(func(), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}*/