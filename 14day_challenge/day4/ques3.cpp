/* 
Sum 1 to N

Now we're introducing a very important looping pattern: accumulation.

Suppose:

n = 5

We want:

1 + 2 + 3 + 4 + 5 = 15

We need a variable that starts at 0:

int sum = 0;

Then during each iteration, add the current number into it:

Start: sum = 0

add 1 → sum = 1
add 2 → sum = 3
add 3 → sum = 6
add 4 → sum = 10
add 5 → sum = 15
Your task

Take an integer n.

Example:

Input:
5

Output:
15

Use:

int sum = 0;

and a for loop from 1 to n.

Inside the loop, update sum. Then print sum after the loop finishes.
*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;
    
    int sum = 0;

    for(int i = 1; i<=n; i++){
        sum = sum + i;
    }

    cout << sum;

    return 0;
}