/*
Problem:
Find the Nth Fibonacci number using recursion.

Fibonacci Series:
0 1 1 2 3 5 8 13 ...

Example:
Input:
6

Output:
8

Approach:
Each Fibonacci number is the sum of the previous two.
*/

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}

/*
Time Complexity: O(2^N)
Space Complexity: O(N)

Key Learning:
A recursive function can branch into multiple
recursive calls, forming a recursion tree.
*/
