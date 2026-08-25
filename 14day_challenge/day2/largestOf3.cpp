/*
Largest of Three

Now take three integers:

a
b
c

and print the largest.

Example:

Input:
7 15 9

Output:
Largest: 15

This introduces one new idea: else if.

Structure:

if (condition1) {
    // ...
} else if (condition2) {
    // ...
} else {
    // ...
}

Your job is to figure out the conditions yourself.

Hint: for a to be the largest, it must be at least as large as both b and c.

Use &&.

Assume ties are allowed too, so use >= rather than only >.
*/

#include <iostream>

using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    if (a >= b && a >= c){
        cout << "Largest: " << a;
    } else if (b >= a && b >= c){
        cout << "Largest: " << b;
    } else{
        cout << "Largest: " << c;
    }

    return 0;

}