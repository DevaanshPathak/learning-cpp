/* 
Print N to 1

Now reverse the direction.

Input:

5

Output:

5 4 3 2 1

This time, think about the three parts yourself:

for ( ??? ; ??? ; ??? ) {
    cout << i << " ";
}

Hint: instead of increasing i, you’ll need:

i--;

Write the full program and send it.
*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for(int i = n; i >= 1; i--){
        cout << n << " ";
        n -= 1;
    }
    return 0;
}