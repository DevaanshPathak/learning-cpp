/*
Positive / Negative / Zero

A number has three possibilities.

number > 0  → Positive
number < 0  → Negative
otherwise   → Zero
Example 1

Input:

12

Output:

Positive
Example 2

Input:

-7

Output:

Negative
Example 3

Input:

0

Output:

Zero

Use:

if (...) {

} else if (...) {

} else {

}
*/

#include <iostream>

using namespace std;

int main() {
    int a;

    cin >> a;

    if (a > 0){
        cout << "Positive";
    } else if (a < 0){
        cout << "Negative";
    } else{
        cout << "Zero";
    }

    return 0;
}