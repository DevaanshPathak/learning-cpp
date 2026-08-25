/*
Last digit

The % operator is also useful for extracting digits.

For example:

123 % 10

gives:

3

because dividing 123 by 10 leaves remainder 3.

Similarly:

487 % 10   // 7
52 % 10    // 2
100 % 10   // 0
Your task

Take an integer as input and print its last digit.

Example input:

5837

Expected output:

Last digit: 7

Store the last digit in a variable:

int lastDigit = ...;
*/

#include <iostream>

using namespace std;

int main() {
    int a;

    cin >> a;

    int lastDigit = a % 10;

    cout << "Last digit: " << lastDigit << '\n';

    return 0;
}