/*
Largest of Two

Now we'll use the comparison operator:

>

Take two integers a and b.

Print the larger one.

Example:

Input:
17 9

Output:
Largest: 17

And:

Input:
4 12

Output:
Largest: 12

For now, assume the two numbers are different.

Use:

if (...) {
    
} else {
    
}
*/

#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if (a>b){
        cout << "Largest: " << a;
    } else {
        cout << "Largest: " << b;
    }

    return 0;
}