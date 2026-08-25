/*
Create:

int x = 10;

Then change x in this order:

multiply it by 5
add 10
divide it by 2

Finally print x.

So conceptually:

10
↓ ×5
50
↓ +10
60
↓ ÷2
30

Expected output:

30
*/

#include <iostream>

using namespace std;

int main() {
    int x = 10;

    x = x*5;
    x = x+10;
    x = x/2;

    cout << x;

    return 0;
}