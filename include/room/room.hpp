/** \file room.hpp
 * Room header file.
 */

/**
 * Room class.
 */
class Room {
    public:
        double length;  /*!< Room length */
        double breadth; /*!< Room breadth */
        double height;  /*!< Room height */

        double calculateArea();
        double calculateVolume();

};
