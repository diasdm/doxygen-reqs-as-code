/** \file main.cpp
 * Main file.
 */
#include <iostream>

#include "room.hpp"

int main(int argc, char *argv[])
{
    // create object of Room class
    Room room1;

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // calculate and display the area and volume of the room
    std::cout << "Area of Room =  " << room1.calculateArea() << std::endl;
    std::cout << "Volume of Room =  " << room1.calculateVolume() << std::endl;

    return 0;
}
