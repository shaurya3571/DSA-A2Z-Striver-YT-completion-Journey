/*
Problem:
Find the sum of the first N natural numbers using functional recursion.

Example:
Input: N = 5
Output: 15

Approach:
Each function call returns its contribution to the final answer.
*/
#include <iostream>
using namespace std;

int f(int n) {
    if (n == 0)
        return 0;

    return n + f(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << f(n);
    return 0;
}

/*
Time Complexity: O(N)
Space Complexity: O(N)

Key Learning:
Functional recursion returns a value from every recursive call.
*/
