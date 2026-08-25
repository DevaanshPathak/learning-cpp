/*
Grade Calculator

Take marks from 0 to 100.

Print:

90–100 → A
80–89  → B
70–79  → C
60–69  → D
below 60 → F

Example:

Input:
84

Output:
B

Use an if / else if / else chain.
*/

#include <iostream>

using namespace std;

int main() {
    int marks;

    cin >> marks;

    if (marks >= 90) {
        cout << "A";
    } else if (marks >= 80) {
        cout << "B";
    } else if (marks >= 70) {
        cout << "C";
    } else if (marks >= 60) {
        cout << "D";
    } else {
        cout << "F";
    }
    return 0;
}