#include <bits/stdc++.h>
using namespace std;

void pattern9(int n) {
    // upper half (pyramid)
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1 ; k++) {
            cout << "*";
        }
        cout << endl;
    }
    // lower half (inverted pyramid)
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i-1; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * (n - i) + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern9(n);
    return 0;
}
