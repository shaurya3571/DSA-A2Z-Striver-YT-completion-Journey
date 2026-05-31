/*
Problem: Factorial of N

Intuition:
Factorial of a number n means multiplying all integers from 1 to n.
This naturally fits recursion because n! can be written as n * (n-1)!,
so each call solves a smaller version of the same problem.

Approach:
1. Define a recursive function factorial(int n).
2. Base case: if n is 0 or 1, return 1.
   - This is required to stop recursion and correctly represent 0! = 1 and 1! = 1.
3. Recursive step: return n * factorial(n - 1).
4. Recursive thinking process:
   - To compute factorial(5), trust factorial(4) gives 4!.
   - Then multiply 5 with that smaller answer.
   - Keep reducing the input by 1 until reaching the base case.

Dry Run:
Sample Input: n = 4
- factorial(4) = 4 * factorial(3)
- factorial(3) = 3 * factorial(2)
- factorial(2) = 2 * factorial(1)
- factorial(1) = 1 (base case)
Now backtrack:
- factorial(2) = 2 * 1 = 2
- factorial(3) = 3 * 2 = 6
- factorial(4) = 4 * 6 = 24
Output: 24

Complexity Analysis:
- Time Complexity: O(n)
- Space Complexity: O(n) (recursion stack)

Key Learning:
When a problem can be expressed in terms of a smaller identical subproblem,
recursion becomes a clean approach, and a correct base case is essential to avoid infinite calls.
*/

#include <iostream>

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }

    return static_cast<long long>(n) * factorial(n - 1);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << factorial(n) << '\n';
    return 0;
}
