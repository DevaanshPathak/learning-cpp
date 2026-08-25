/*
Suppose:

int a = 10;
int b = 20;

We want to swap them so that afterward:

a = 20
b = 10

You’ll need a third temporary variable.

Think of it like having two cups of liquid: you need an empty cup to swap their contents without losing one.

Task

Take two integers a and b as input.

Example:

10 20

Swap their values using:

int temp;

Then print:

a: 20
b: 10

Do not use swap(a, b) yet. I want you to understand how the swap works manually.
*/


#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "a: " << a << '\n' << "b: " << b << '\n';

    return 0;
}