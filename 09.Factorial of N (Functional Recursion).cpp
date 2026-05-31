/*
Problem:
Find the factorial of N using functional recursion.

Example:
Input: N = 5
Output: 120

Approach:
Each recursive call returns its contribution to the factorial.
*/
#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * fact(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << fact(n);
    return 0;
}

/*
Time Complexity: O(N)
Space Complexity: O(N)

Key Learning:
Functional recursion builds the answer while returning from recursive calls.
*/
