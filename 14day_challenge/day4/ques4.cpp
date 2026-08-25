/*
Next exercise — Sum of even numbers

Take an integer n.

Find the sum of all even numbers from 1 to n.

Example:

Input:
10

Even numbers:
2 4 6 8 10

Output:
30

Use:

int sum = 0;
a for loop
an if condition with %
*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int sum = 0;

    for(int i = 1; i <= n; i++){
        if (i % 2 == 0){
            sum += i;
        }
    }
    cout << sum;
}