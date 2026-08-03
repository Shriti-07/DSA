#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool palindromeCheck(const string& s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    Solution sol;
    cout << boolalpha << sol.palindromeCheck("Madam") << endl; // true
    return 0;
}
