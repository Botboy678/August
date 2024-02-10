#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Welcome to my simple temperature converter\n"
		<< "\nWhat would you like to convert ?\n"
		<< "1. Celsius to Fahrenheit "
		<< "\n2. Fahrenheit to Celsius "
		<< "\nChoose either one or two: ";
	int choice;
	cin >> choice;
	cout << showpoint << fixed << setprecision(3);
	cin.get();
	switch (choice) {
		double celsius, fahrenheit;
	case 1:
		cout << "What is the Celsius Temp. : ";
		cin >> celsius;
		fahrenheit = (celsius * 9 / 5) + 32;
		cout << "Your converted temperature is " << fahrenheit << 'F';
		break;
	case 2:
		cout << "What is the Fahrenheit Temp. : ";
		cin >> fahrenheit;
		celsius = (fahrenheit - 32) * 5 / 9;
		cout << "Your converted temperature is " << celsius << 'C';
		break;
	default:
		cout << "You chose neither 1 or 2 from the menu";
	}


	return 0;
}