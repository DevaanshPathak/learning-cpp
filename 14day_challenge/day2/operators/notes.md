## Arithmetic operators

- `+` addition
- `-` subtraction
- `*` multiplication
- `/` division
- `%` remainder

Example:

```cpp
int a = 10;
int b = 3;

cout << a + b << '\n'; // 13
cout << a - b << '\n'; // 7
cout << a * b << '\n'; // 30
cout << a / b << '\n'; // 3
cout << a % b << '\n'; // 1
```

Remember:

```cpp
10 / 3
```

with integers gives:

```cpp
3
```

while:

```cpp
10.0 / 3
```

gives approximately:

```cpp
3.33333
```

## Comparison operators

These operators don't usually produce a number.

They produce:

- `true`
- `false`

The operators are:

- `==` equal to
- `!=` not equal to
- `<` less than
- `>` greater than
- `<=` less than or equal to
- `>=` greater than or equal to

Examples:

```cpp
5 == 5
```

is:

```cpp
true
```

```cpp
5 == 7
```

is:

```cpp
false
```

```cpp
10 > 4
```

is:

```cpp
true
```

```cpp
3 >= 3
```

is:

```cpp
true
```

because `>=` means:

greater than or equal to

Very important: `=` vs `==`

This is one of the most important beginner mistakes.

```cpp
x = 5;
```

means:

store 5 inside `x`

But:

```cpp
x == 5
```

means:

is `x` equal to 5?

So:

- `=` assignment
- `==` comparison

Do not confuse them.

Example with bool

```cpp
int age = 18;

bool result = age >= 18;
```

Since:

```cpp
18 >= 18
```

is true:

```cpp
result = true;
```

If you directly print a bool:

```cpp
cout << result;
```

C++ normally prints:

```cpp
1
```

for true and:

```cpp
0
```

for false.

So:

```cpp
cout << (10 > 5);
```

prints:

```cpp
1
```

and:

```cpp
cout << (10 < 5);
```

prints:

```cpp
0
```

## Logical operators

Now let’s move to logical operators:

- `&&` // AND
- `||` // OR
- `!` // NOT

Example:

```cpp
int age = 20;
bool hasId = true;

cout << (age >= 18 && hasId);
```

Both conditions are true, so it prints:

```cpp
1
```

`&&` means both must be true.

`||` means at least one must be true.

`!` reverses a boolean:

```cpp
!true   // false
!false  // true
```