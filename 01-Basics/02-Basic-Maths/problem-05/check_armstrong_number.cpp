#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 153;
    int y = n;
    int sum = 0;
    int s = (n == 0) ? 1 : log10(n) + 1;

    while (y != 0) {
        int digit = y % 10;
        sum = sum + pow(digit, s);
        y = y / 10;
    }

    if (sum == n) {
        cout << "armstrong";
    } else {
        cout << "not armstrong";
    }
    return 0;
}