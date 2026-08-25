/*
Divisible by 3 and 5

Now we use the logical AND operator:

&&

A number is divisible by both 3 and 5 when both of these are true:

a % 3 == 0
a % 5 == 0

So you’ll combine them with:

&&
Task

Take an integer as input.

If it is divisible by both 3 and 5, print:

Divisible by both

Otherwise print:

Not divisible by both

Examples:

Input:
30

Output:
Divisible by both
Input:
9

Output:
Not divisible by both
*/

#include <iostream>

using namespace std;

int main(){
    int a;

    cin >> a;

    if (a % 3 == 0 && a % 5 == 0){
        cout << "Divisible by both";
    } else {
        cout << "Not divisible by both";
    }

    return 0;
}