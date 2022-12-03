/** \file room.cpp
 * Room source file.
 */

#include "room.hpp"

/**
 * Computes room floor area.
 * 
 * @return Room area.
 */
double Room::calculateArea(){   
    return length * breadth;
}

/**
 * Computes room volume.
 * 
 * @return Room volume.
 */
double Room::calculateVolume(){   
    return length * breadth * height;
}
