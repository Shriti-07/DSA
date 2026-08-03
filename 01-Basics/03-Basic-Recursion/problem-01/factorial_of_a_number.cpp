#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }
};

int main() {
    Solution sol;
    cout << sol.factorial(5) << endl; // 120
    return 0;
}
