#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> printDivisors(int n) {
        vector<int> divisors;
        for (int x = 1; (long long)x * x <= n; x++) {
            if (n % x == 0) {
                divisors.push_back(x);
                if (n / x != x) {
                    divisors.push_back(n / x);
                }
            }
        }
        return divisors;
    }
};

int main() {
    int n = 36;
    Solution sol;
    vector<int> divisors = sol.printDivisors(n);
    for (auto it : divisors) {
        cout << it << " ";
    }
    return 0;
}