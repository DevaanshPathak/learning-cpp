/*
Count digits

Take a positive integer n.

Example:

Input:
58392

Output:
5

The idea is to repeatedly divide the number by 10:

58392 → 5839 → 583 → 58 → 5 → 0

Each division removes one digit from the right.

Use a while loop this time.

You'll need:

int count = 0;

Then repeatedly do something like:

n /= 10;
count++;

until n becomes 0.
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    while (n != 0){
        count++;
        n/=10;
    }

    cout << count;

}