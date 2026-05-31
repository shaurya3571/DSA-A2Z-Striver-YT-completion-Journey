/*
Problem:
Find the factorial of N using parameterised recursion.

Example:
Input: N = 5
Output: 120

Explanation:
5! = 5 × 4 × 3 × 2 × 1
*/
#include <iostream>
using namespace std;

void fact(int n, int ans) {
    if (n == 0) {
        cout << ans;
        return;
    }

    fact(n - 1, ans * n);
}

int main() {
    int n;
    cin >> n;

    fact(n, 1);
    return 0;
}

/*
Time Complexity: O(N)
Space Complexity: O(N)

Key Learning:
The result is accumulated and passed as a parameter.
*/
