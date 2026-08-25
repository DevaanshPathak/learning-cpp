/*
Leap Year

A year is a leap year if:

it is divisible by 400, or
it is divisible by 4 and not divisible by 100

So the condition is:

year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)

Examples:

2000 → Leap Year
2024 → Leap Year
1900 → Not Leap Year
2023 → Not Leap Year

Why is 1900 not a leap year?

1900 % 4 == 0      true
1900 % 100 == 0    true
1900 % 400 == 0    false

Years divisible by 100 are not leap years unless they're also divisible by 400.

Your task

Take an integer year.

Print:

Leap Year

or:

Not Leap Year

Try writing the compound condition yourself using &&, ||, ==, and !=.
*/

#include <iostream>

using namespace std;

int main() {

    int year;

    cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        cout << "Leap Year";
    } else {
        cout << "Not Leap Year";
    }

    return 0;

}