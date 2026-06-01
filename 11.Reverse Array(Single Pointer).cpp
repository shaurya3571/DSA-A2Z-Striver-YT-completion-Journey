/*
Problem:
Reverse an array using recursion and a single pointer.

Example:
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

Approach:
Swap current index with its corresponding
element from the opposite side.
*/

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr, int i, int n) {
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);

    reverseArray(arr, i + 1, n);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverseArray(arr, 0, n);

    for (int num : arr)
        cout << num << " ";

    return 0;
}

/*
Time Complexity: O(N)
Space Complexity: O(N)

Key Learning:
Only one pointer is required because the second
index can be derived mathematically.
*/
