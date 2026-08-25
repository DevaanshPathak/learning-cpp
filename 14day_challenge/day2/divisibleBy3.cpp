/*
A number is divisible by 3 when:

number % 3 == 0

For example:

12 % 3 = 0  → divisible
14 % 3 = 2  → not divisible

Write a program that takes an integer as input.

If it is divisible by 3, print:

Divisible by 3

Otherwise print:

Not divisible by 3

Example:

Input:
15

Output:
Divisible by 3

Use if and else, and send me your code.
*/

#include <iostream>

using namespace std;

int main(){
    int a;

    cin >> a;

    if (a%3 == 0){
        cout << "Divisible by 3";
    } else{
        cout << "Not divisible by 3";
    }

    return 0;
}