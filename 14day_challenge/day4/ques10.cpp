/*
Digit Sum

Given:

5832

we want:

5 + 8 + 3 + 2 = 18

You already know the two key digit operations:

int digit = n % 10;  // get last digit
n /= 10;             // remove last digit

This time, instead of building a reversed number, start with:

int sum = 0;

and add each extracted digit into sum.

Example progression for 5832:

digit = 2 → sum = 2
digit = 3 → sum = 5
digit = 8 → sum = 13
digit = 5 → sum = 18
Your task

Take a positive integer n and print the sum of its digits.

Example:

Input:
5832

Output:
18

Use a while loop and solve it yourself.
*/

#include <iostream>

using namespace std;

int main() {
    
    int n;

    cin >> n;

    int sumDigits = 0;

    while (n != 0){
        int digit = n%10;
        sumDigits += digit;
        n = n/10;
    }

    cout << sumDigits;

    return 0;

}