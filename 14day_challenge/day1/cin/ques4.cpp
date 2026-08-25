/*
Take two integers:

length
width

Calculate the area:

area = length × width

Example input:

8 5

Expected output:

Area: 40
Requirement

This time, don't calculate inside cout.

Create a third variable:

int area = ...;

Then print area.
*/

#include <iostream>

using namespace std;

int main() {
    int length, width;

    cin >> length >> width;

    int area = length*width;

    cout << "Area: " << area << '\n';

    return 0;
}