/*
Print 1 to N

Take an integer n.

Example input:

5

Print:

1 2 3 4 5

Use a for loop.

A small trailing space like:

1 2 3 4 5 

is fine for this exercise.

Write the complete program yourself and send it.
*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << i << '\n';
    }

    return 0;
}