#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int NnumbersSum(int n) {
        if (n == 0) {
            return 0;
        }
        return n + NnumbersSum(n - 1);
    }
};

int main() {
    Solution sol;
    cout << sol.NnumbersSum(5) << endl; // 15
    return 0;
}
