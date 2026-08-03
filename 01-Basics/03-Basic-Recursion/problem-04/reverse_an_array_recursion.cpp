#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(int arr[], int n) {
        if (n <= 0) {
            return;
        }
        swap(arr[0], arr[n - 1]);
        reverse(arr + 1, n - 2);
    }
};

int main() {
    Solution sol;
    int arr[] = {1, 2, 3, 4, 5};
    sol.reverse(arr, 5);
    for (int x : arr) cout << x << " "; // 5 4 3 2 1
    cout << endl;
    return 0;
}
