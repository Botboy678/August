#include <iostream>
#include <cmath> // Header file for the mathematical operations used 
#include <iomanip> // for the setprecision funcion
using namespace std;

int main() {
    unsigned choice; // usigned int only allowing zero and non negative numbers
    cout << "Geometry Calculator\n"
        << "1. Calculate the Area of a Circle\n"
        << "2. Calculate the Area of a Rectangle\n"
        << "3. Calculate the Area of a Triangle\n"
        << "4. Quit\n"
        << "Enter your choice(1234): ";
    cin >> choice; // stores user input in declared/initialized choice variable
   
    if (choice < 1 || choice > 4) { // Only allows numbers from greater than 1 and less than 4 ( including 1 & 4 as well )
        cout << "Invalid Menu Choice!! ";
            return 0; // Terminates program
    }
    else if (choice == 1) {
        double radius;
        const double pi = 3.14159; // pi is a constant so I initialized it as a literal
        cout << "What is the radius of your circle: ";
        cin >> radius;
        double area = pi * pow(radius, 2); // raises user radius to the power of 2 
        cout << "The area of your circle is " << setprecision(4) << area; // decimal points of 2
        return 0;
    }
    else if (choice == 2) {
        int length, width; // initializes the length and width variables
        cout << "what is the length of your rectangle: "; // asks for the length
        cin >> length; // stores length in "length"
        cout << "what is the width of your rectangle: "; // asks for the width
        cin >> width; // stores the width
        int area = length * width; // multiples the length and width to get the area
        cout << "The area of your rectangle is " << area << endl;
        return 0;

    }
    else if (choice == 3) {
        double length, base, area;
        cout << "what is the length of your triangle: ";
        cin >> length;
        cout << "what is the base: ";
        cin >> base;
        area = length * base * 0.5 ; // multiplies the given length times the base 
        cout << "The area of your triangle is " << setprecision(2) << double(area) << endl; // I type cast the area to change to a double 
        return 0;
    }
    else if (choice == 4) {
        cout << "You chose to quit. Thank You for checking out Emmanuels Simple Geometry calculator :)";
        return 0;
    }
    return 0;


}
