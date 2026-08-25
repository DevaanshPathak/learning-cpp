/*
Convert seconds to h:m:s

Suppose the input is:

3665

That means 3665 seconds.

We want:

1:1:5

because:

1 hour = 3600 seconds
1 minute = 60 seconds

You’ll need both / and %.

Useful ideas:

hours = totalSeconds / 3600;

Then find the seconds left after removing full hours:

remaining = totalSeconds % 3600;

Then use remaining to calculate minutes and seconds.

Your task

Take an integer called:

totalSeconds

and calculate:

hours
minutes
seconds

Example:

Input:
7384

Output:
2:3:4

because:

7384 seconds = 2 hours, 3 minutes, 4 seconds

Try figuring out the formulas for minutes and seconds yourself and send me the full program.
*/

#include <iostream>

using namespace std;

int main() {
    int totalSeconds;

    cin >> totalSeconds;

    int hours = totalSeconds / 3600;

    int secLeftAfterHours = totalSeconds % 3600;

    int minutes = secLeftAfterHours / 60;

    int seconds = secLeftAfterHours % 60;

    cout << hours << ":" << minutes << ":" << seconds << '\n';

    return 0;
}