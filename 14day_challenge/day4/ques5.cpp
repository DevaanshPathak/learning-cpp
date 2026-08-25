/*
Multiplication Table

Take an integer n.

Example input:

5

Print:

5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 50

Use a for loop from 1 to 10.
*/

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    for(int i = 1; i<=10; i++){
        cout << n << " X " << i << " = " << n*i << '\n';
    }
    
    return 0;
}