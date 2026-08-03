#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printNumbers(int n) {
        if (n == 0) {
            return;
        }
        cout << n << endl;
        printNumbers(n - 1);
    }
};

int main() {
    Solution sol;
    sol.printNumbers(5); // 5 4 3 2 1
    return 0;
}
