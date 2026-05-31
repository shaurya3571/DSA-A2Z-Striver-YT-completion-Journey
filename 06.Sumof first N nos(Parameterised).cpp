/*
Problem:
Find the sum of the first N natural numbers using parameterised recursion.

Example:
Input: N = 5
Output: 15

Explanation:
1 + 2 + 3 + 4 + 5 = 15

Approach:
Carry the answer as a parameter and update it in every recursive call.
*/
#include <iostream>
using namespace std;

void f(int n, int sum) {
    if (n < 1) {
        cout << sum;
        return;
    }

    f(n - 1, sum + n);
}

int main() {
    int n;
    cin >> n;

    f(n, 0);
    return 0;
}

/*
Time Complexity: O(N)
Space Complexity: O(N)

Key Learning:
Parameterised recursion carries the answer through function parameters.
*/