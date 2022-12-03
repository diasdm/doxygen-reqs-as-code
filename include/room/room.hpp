/** \file room.hpp
 * Room header file.
 */

/**
 * Room class.
 */
class Room {
    public:
        double length;
        double breadth;
        double height;

        double calculateArea();
        double calculateVolume();

};
