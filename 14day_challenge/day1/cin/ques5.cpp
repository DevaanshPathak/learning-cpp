/*
Your next task

Write a program that:

creates a double called celsius
takes Celsius temperature as input
creates a double called fahrenheit
calculates Fahrenheit
prints it
Example input
25
Expected output
Fahrenheit: 77

Use this formula:

fahrenheit = (celsius * 9.0 / 5.0) + 32

But write the complete program yourself.
*/

#include <iostream>

using namespace std;

int main() {
    double celsius;

    cin >> celsius;

    double fahrenheit = (celsius*9.0/5.0) + 32;
    
    cout << "Fahrenheit: " << fahrenheit << '\n';

    return 0;
}