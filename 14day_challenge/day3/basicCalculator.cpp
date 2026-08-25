/*
Basic Calculator

Take:

double a, b;
char op;

Input will look like:

10 5 +

Depending on op, perform:

+  addition
-  subtraction
*  multiplication
/  division

Examples:

Input:
10 5 +

Output:
15
Input:
10 4 /

Output:
2.5

Use an if / else if chain such as:

if (op == '+') {

} else if (op == '-') {

}

For division, also handle division by zero. If b == 0, print:

Cannot divide by zero

Otherwise perform the division.
*/

#include <iostream>

using namespace std;

int main() {
    double a, b;
    char op;

    cin >> a >> b >> op;

    if (op == '+'){
        cout << a+b;
    } else if (op == '-'){
        cout << a-b;
    } else if (op == '*'){
        cout << a*b;
    } else if (op == '/' && b != 0){
        cout << a/b;
    } else if (op == '/' && b == 0){
        cout << "Cannot divide by 0";
    }

    return 0;
}