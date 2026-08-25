/*
Next important concept — changing variable values

A variable is called a variable because its value can change.

Example:

int x = 10;

x = 20;

Initially:

x = 10

Then:

x = 20;

replaces the old value.

Now:

x = 20

Important: the second time, we do not write int again.

Correct:

int x = 10;
x = 20;

Wrong:

int x = 10;
int x = 20;

because that tries to declare another variable named x in the same place.

You can also use the old value to calculate the new value:

int x = 10;

x = x + 5;

Think carefully about this line:

x = x + 5;

This is not mathematics.

In maths, x = x + 5 looks impossible.

In programming, = means:

calculate the right side, then store the result in the variable on the left.

So if:

x = 10

then:

x = x + 5;

works like:

right side: x + 5
            10 + 5
            15

then store 15 in x

Now:

x = 15
*/