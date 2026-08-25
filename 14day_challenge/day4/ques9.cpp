/*
A prime number has exactly two positive divisors:

1 and itself

Examples:

2 → prime
3 → prime
5 → prime
7 → prime
11 → prime

Not prime:

1 → not prime
4 → divisible by 2
6 → divisible by 2 and 3
9 → divisible by 3

For a beginner solution, check whether n is divisible by any number from:

2 to n - 1

You can use:

n % i == 0

If that ever becomes true, then n has another divisor, so it is not prime.

You’ll probably want:

bool isPrime = true;

But remember:

n <= 1 → not prime

Then loop:

for (int i = 2; i < n; i++) {
    // check n % i
}

This is also a good place to learn break.

break immediately exits a loop:

for (...) {
    if (...) {
        break;
    }
}

So once you find even one divisor, there’s no reason to keep checking.

Your target behavior:

Input: 7
Output: Prime
Input: 12
Output: Not Prime

Try building it with:

bool isPrime = true;

a special check for n <= 1, a for loop, %, and break.
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << "The number is Prime";
    } else {
        cout << "The number is not Prime";
    }

    return 0;
}