#include <bits/stdc++.h>
using namespace std;

void pattern12(int n) {
    int j;
    for (int i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << j;
        }
        for (int k = 0; k < 2 * (n - i); k++) {
            cout << " ";
        }
        for (int l = j-1; l >= 1; l--) {
            cout << l;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern12(n);
    return 0;
}
