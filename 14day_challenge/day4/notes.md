# Day 4 — Loops

Today’s big idea: making the computer repeat code.

You’ll learn:

- `for`
- `while`
- `break`
- `continue`

Then we’ll solve all the listed exercises and finish with the two Codeforces problems.

## 1. Why do we need loops?

Suppose I ask you to print:

```cpp
1
2
3
4
5
```

You could do:

```cpp
cout << 1 << '\n';
cout << 2 << '\n';
cout << 3 << '\n';
cout << 4 << '\n';
cout << 5 << '\n';
```

That works.

But what if I ask you to print:

```cpp
1 to 100000
```

Obviously we don't want to write 100000 `cout` statements.

That's what loops are for.

## 2. for loop

A basic `for` loop looks like this:

```cpp
for (initialization; condition; update) {
    // code to repeat
}
```

Example:

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << '\n';
}
```

Output:

```cpp
1
2
3
4
5
```

Let's break this apart carefully.

```cpp
int i = 1;
```

We create a variable called `i` and start it at 1.

`i` is commonly called the loop variable or counter.

You don't have to name it `i`, but programmers commonly use:

- `i`
- `j`
- `k`

for loop counters.

```cpp
i <= 5
```

The middle part is the condition:

```cpp
i <= 5
```

The loop continues while this condition is true.

So:

- `i = 1 → 1 <= 5 → true`
- `i = 2 → 2 <= 5 → true`
- `...`
- `i = 5 → 5 <= 5 → true`
- `i = 6 → 6 <= 5 → false → stop`

```cpp
i++
```

After every iteration:

```cpp
i++;
```

runs.

You learned yesterday that:

```cpp
i++;
```

means:

```cpp
i = i + 1;
```

So the loop goes:

```cpp
1 → 2 → 3 → 4 → 5 → 6
```

and stops at 6.

## 3. What exactly happens?

For:

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << '\n';
}
```

C++ effectively does:

1. Create `i = 1`
2. Is `i <= 5`?
   - YES
   - print 1
   - increase `i` → 2
3. Is `i <= 5`?
   - YES
   - print 2
   - increase `i` → 3
4. Is `i <= 5`?
   - YES
   - print 3
   - increase `i` → 4
5. Is `i <= 5`?
   - YES
   - print 4
   - increase `i` → 5
6. Is `i <= 5`?
   - YES
   - print 5
   - increase `i` → 6
7. Is `i <= 5`?
   - NO
   - STOP

One repetition of the loop is called an iteration.

This loop has 5 iterations.

## 4. Using input with a loop

Suppose the user enters:

```cpp
8
```

and we want:

```cpp
1 2 3 4 5 6 7 8
```

We can do:

```cpp
int n;
cin >> n;

for (int i = 1; i <= n; i++) {
    cout << i << " ";
}
```

Notice that the stopping point isn't hardcoded anymore:

```cpp
i <= n
```

So the same program works for any `n`.

## While loops

A while loop repeats code as long as a condition stays true.

Basic structure:

```cpp
while (condition) {
    // repeated code
}
```

For example, print 1 to 5:

```cpp
int i = 1;

while (i <= 5) {
    cout << i << " ";
    i++;
}
```

Output:

```cpp
1 2 3 4 5
```

Here’s what happens:

- `i = 1`

- `1 <= 5 → true → print 1 → i becomes 2`
- `2 <= 5 → true → print 2 → i becomes 3`
- `3 <= 5 → true → print 3 → i becomes 4`
- `4 <= 5 → true → print 4 → i becomes 5`
- `5 <= 5 → true → print 5 → i becomes 6`
- `6 <= 5 → false → stop`

### for vs while

These two loops do the same thing:

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
```

and:

```cpp
int i = 1;

while (i <= 5) {
    cout << i << " ";
    i++;
}
```

The difference is mainly where the pieces go.

A for loop bundles everything together:

```cpp
for (start; condition; update)
```

A while loop separates them:

```cpp
start;

while (condition) {
    // code
    update;
}
```

A useful beginner rule is:

- use `for` when you know roughly how many times you want to loop
- use `while` when you want to repeat until something changes

For example, with digit counting, we don’t really care beforehand how many iterations happen. We just keep dividing until the number becomes 0.

### Very important: infinite loops

Look at this:

```cpp
int i = 1;

while (i <= 5) {
    cout << i;
}
```

There is no:

```cpp
 i++;
```

So `i` stays 1 forever.

The condition:

```cpp
i <= 5
```

is always true.

That creates an infinite loop.

So with a while loop, always ask yourself:

What changes inside the loop that will eventually make the condition false?

## Mini exercise before digit counting

Take an integer `n` and print:

```
1 2 3 ... n
```

using a `while` loop, not a `for` loop.

Example input:

```cpp
5
```

Output:

```cpp
1 2 3 4 5
```

Use:

```cpp
int i = 1;
```

and figure out the while condition and update yourself.