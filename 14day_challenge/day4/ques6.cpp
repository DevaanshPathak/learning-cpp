/*
Factorial

The factorial of a positive integer n is:

n! = 1 × 2 × 3 × ... × n

Examples:

5! = 1 × 2 × 3 × 4 × 5 = 120
4! = 24
1! = 1

For this one, don’t start with 0.

Use:

long long factorial = 1;

Then multiply into it inside a loop.

Example input:

5

Expected output:

120

Use a for loop from 1 to n, update factorial, then print it after the loop.
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    long long factorial = 1;

    cin >> n;

    for(int i = 1; i<=n; i++){
        factorial = factorial * i;
    }

    cout << factorial;
}