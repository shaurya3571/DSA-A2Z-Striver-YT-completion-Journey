/*
Problem:
Reverse an array using recursion and the two-pointer approach.

Example:
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

Approach:
Swap the elements at the left and right pointers,
then recursively move towards the center.
*/

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr, int l, int r) {
    if (l >= r)
        return;

    swap(arr[l], arr[r]);

    reverseArray(arr, l + 1, r - 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverseArray(arr, 0, n - 1);

    for (int num : arr)
        cout << num << " ";

    return 0;
}

/*
Time Complexity: O(N)
Space Complexity: O(N)

Key Learning:
Two pointers move inward after each recursive call.
*/
