/*
Triangle Validity

Suppose we have three side lengths:

a, b, c

Not every three numbers can form a triangle.

For example:

3, 4, 5   → valid triangle
1, 2, 10  → not valid

For three sides to form a triangle, all three of these must be true:

a + b > c
a + c > b
b + c > a

Notice it's strictly > — not >=.

For example:

1, 2, 3

doesn't form a proper triangle because:

1 + 2 = 3

The sides would collapse into a straight line.

Your task

Take three integers a, b, and c.

If they form a valid triangle, print:

Valid Triangle

Otherwise:

Invalid Triangle
*/

#include <iostream>

using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    if(a + b > c && b + c > a && a + c > b){
        cout << "Valid Triangle";
    }
    else{
        cout << "Invalid Triangle";
    }

    return 0;
}