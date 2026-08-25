/*
Take two integers a and b.

For input:

10 4

print exactly:

Sum: 14
Difference: 6
Product: 40

Use three separate cout statements and '\n'.
*/

#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;
    
    cout << "Sum: " << a+b << '\n';
    cout << "Difference: " << a-b << '\n';
    cout << "Product: " << a*b << '\n';

    return 0;
}