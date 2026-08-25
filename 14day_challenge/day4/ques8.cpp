/*
Reverse Number

Now we can build on the same idea.

For input:

1234

we want:

4321

You already know how to get the last digit:

int digit = n % 10;

So for 1234:

1234 % 10 → 4

Then remove that digit:

n /= 10;

which gives:

123

To build the reversed number, start with:

int reversed = 0;

For every extracted digit, update it using:

reversed = reversed * 10 + digit;

Try writing the full while-loop solution yourself.
*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int reversed = 0;

    while (n != 0) {
        int digit = n % 10;

        reversed = reversed * 10 + digit;

        n /= 10;
    }

    cout << reversed;

    return 0;
}