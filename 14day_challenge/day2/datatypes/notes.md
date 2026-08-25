## Int Data type
`int` stores whole numbers.

```cpp
int age = 18;
int score = 100;
int temperature = -5;
```

It can store roughly:

-2.1 billion to +2.1 billion

You don't need to memorize the exact number right now.

For normal small numbers:

```cpp
int x;
```

is usually what you'll use.

## long long Data Type
What if your number is bigger than what `int` can store?

Use:

```cpp
long long
```

Example:

```cpp
long long population = 8000000000;
```

That's 8 billion, which is too large for a normal 32-bit `int`.

Competitive programming uses `long long` all the time.

Example:

```cpp
long long a, b;

cin >> a >> b;

cout << a * b;
```

Why is this important?

Suppose:

```cpp
a = 1,000,000
b = 1,000,000
```

Then:

```cpp
a × b = 1,000,000,000,000
```

That's 1 trillion.

An `int` cannot store that safely.

A `long long` can.

Important detail

When directly writing a huge integer literal, you'll sometimes see:

```cpp
long long x = 10000000000LL;
```

The `LL` tells C++:

Treat this number as a `long long`.

You'll understand this more later.

For now:

- `int` → normal whole numbers
- `long long` → very large whole numbers

## double Data Type

```cpp
double height = 175.5;
double pi = 3.14159;
```

Use it when decimal values matter.

```cpp
double a = 5;
double b = 2;

cout << a / b;
```

Output:

```cpp
2.5
```

## char

`char` stores one character.

Example:

```cpp
char grade = 'A';
```

Notice:

```cpp
'A'
```

uses single quotes.

More examples:

```cpp
char letter = 'x';
char digit = '7';
char symbol = '@';
```

A `char` stores only one character.

Correct:

```cpp
char x = 'A';
```

Wrong:

```cpp
char x = 'Hello';
```

because "Hello" contains multiple characters.

You can print it normally:

```cpp
char grade = 'A';

cout << grade;
```

Output:

```cpp
A
```

## string
A string stores text.

```cpp
string name = "Devaansh";
```

Unlike `char`, strings use double quotes:

```cpp
char grade = 'A';
string name = "Alex";
```

Think:

- `'A'` → `char`
- "Alex" → `string`

Example:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;

    cin >> name;

    cout << "Hello " << name << '\n';

    return 0;
}
```

Input:

```cpp
Alex
```

Output:

```cpp
Hello Alex
```

For simple competitive programming, `#include <iostream>` often indirectly makes `string` available depending on implementation, but it's better to understand that strings properly come from:

```cpp
#include <string>
```

Later you'll probably use:

```cpp
#include <bits/stdc++.h>
```

for Codeforces, which includes almost everything.

Not yet.

## bool

`bool` represents a truth value.

It can only be:

- `true`
- `false`

Example:

```cpp
bool isStudent = true;
bool isRaining = false;
```

This becomes extremely important with conditions.

For example:

```cpp
bool answer = 10 > 5;
```

Since:

```cpp
10 > 5
```

is true, answer contains:

```cpp
true
```