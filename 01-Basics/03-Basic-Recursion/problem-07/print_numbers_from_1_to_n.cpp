#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printNumbers(int n) {
        if (n == 0) {
            return;
        }
        printNumbers(n - 1);
        cout << n << endl;
    }
};

int main() {
    Solution sol;
    sol.printNumbers(5); // 1 2 3 4 5
    return 0;
}
