#include <bits/stdc++.h>
using namespace std;

void pattern8(int n) {
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
    pattern8(n);
    return 0;
}
