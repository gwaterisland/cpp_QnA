/* what is eNum in c++ ?
In this example, the enum Color defines three constants: RED, GREEN, and BLUE. 
These constants are implicitly assigned integer values starting from 0. 
In the main function, a variable myColor is declared and assigned the value RED. 
The program then checks the value of myColor using the enum constants.
Enums are often used to create more readable and self-explanatory code, especially 
when dealing with a set of related constants. They help improve code maintainability 
by providing a clear and expressive way to represent specific values.
*/

/* Note in Joe's code he uses bitwise shift operation which does something like this.
// Create a constant with the 5th bit set to 1
const int FLAG = 1 << 4;  // 00010000
*/

#include <iostream>

// Define an enumeration named Color
enum Color {
    RED,    // 0
    GREEN,  // 1
    BLUE    // 2
};

int main() {
    // Declare a variable of type Color
    Color myColor = RED;

    // Use the enum values
    if (myColor == RED) {
        std::cout << "The color is red." << std::endl;
    } else if (myColor == GREEN) {
        std::cout << "The color is green." << std::endl;
    } else if (myColor == BLUE) {
        std::cout << "The color is blue." << std::endl;
    }

    return 0;
}
