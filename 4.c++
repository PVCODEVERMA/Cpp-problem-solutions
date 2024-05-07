// WAP to find the area of the circle. Take radius of circle from user as input and print the result in
// below given format.

#include <iostream>
#include <cmath> 

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    if (radius <= 0) {
        std::cout << "Invalid radius. Please provide a positive value." << std::endl;
    } else {
        double area = M_PI * std::pow(radius, 2);
        std::cout << "The area of the circle with radius " << radius << " units is approximately " << area << " square units." << std::endl;
    }

    return 0;
}
