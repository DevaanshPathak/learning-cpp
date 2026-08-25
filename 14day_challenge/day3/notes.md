## 1. if

An if statement runs code only when a condition is true.

```cpp
int age;
cin >> age;

if (age >= 18) {
    cout << "Adult";
}
```

If input is:

```cpp
20
```

then:

```cpp
age >= 18
```

is true, so:

```cpp
Adult
```

is printed.

But if input is:

```cpp
15
```

nothing is printed because the condition is false.

## 2. if + else

Usually we want something to happen in both cases.

```cpp
if (age >= 18) {
    cout << "Adult";
} else {
    cout << "Minor";
}
```

Exactly one of these branches runs.

- `age = 20`
- `20 >= 18 → true`
- `→ Adult`

- `age = 15`
- `15 >= 18 → false`
- `→ Minor`

## 3. else if

Sometimes there are more than two possibilities.

Example:

```cpp
int marks;
cin >> marks;

if (marks >= 90) {
    cout << "A";
} else if (marks >= 80) {
    cout << "B";
} else {
    cout << "C";
}
```

C++ checks conditions from top to bottom.

Suppose:

```cpp
marks = 85
```

First:

```cpp
marks >= 90
```

false.

Then:

```cpp
marks >= 80
```

true.

So it prints:

```cpp
B
```

and stops checking the rest of that chain.

This ordering becomes very important in your grade-calculator exercise.

## 4. Compound boolean expressions

You learned these yesterday:

- `&&` // AND
- `||` // OR
- `!` // NOT

Now we use them heavily inside conditions.

### AND `&&`

Both conditions must be true:

```cpp
if (age >= 18 && hasId == true) {
    cout << "Allowed";
}
```

### OR `||`

At least one must be true:

```cpp
if (day == 6 || day == 7) {
    cout << "Weekend";
}
```

### NOT `!`

Reverses true/false:

```cpp
bool loggedIn = false;

if (!loggedIn) {
    cout << "Please login";
}
```

Since:

```cpp
loggedIn = false
!false = true
```

the if runs.

## Important condition mistake

Remember:

```cpp
x = 5;
```

means:

assign 5 to `x`

while:

```cpp
x == 5
```

means:

check whether `x` equals 5

Inside conditions, you usually want:

```cpp
if (x == 5)
```

not:

```cpp
if (x = 5)
```

That second one is a classic C++ bug.