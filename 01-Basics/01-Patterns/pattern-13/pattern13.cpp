#include <bits/stdc++.h>
using namespace std;

void pattern13(int n) {
    int current = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << current << " ";
            current++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern13(n);
    return 0;
}
