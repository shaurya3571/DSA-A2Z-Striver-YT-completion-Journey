/*
Problem:
Check whether a string is a palindrome using recursion.

Example:
Input:
madam

Output:
Palindrome

Approach:
Compare characters from both ends and move
towards the center recursively.
*/

#include <iostream>
using namespace std;

bool isPalindrome(string &s, int i) {
    if (i >= s.length() / 2)
        return true;

    if (s[i] != s[s.length() - i - 1])
        return false;

    return isPalindrome(s,i+ 1);
}

int main() {
    string s;
    cin >> s;

    if (isPalindrome(s, 0))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

/*
Time Complexity: O(N)
Space Complexity: O(N)

Key Learning:
A palindrome remains valid only if all symmetric
characters match.
*/
