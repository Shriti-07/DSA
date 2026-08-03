#include <bits/stdc++.h>
using namespace std;

/* void pattern15(int n) {
    for (int i = 0; i < n; i++) {
        int num=65;
        for (int j=n;j>i;j++) {
            cout << char(num);
            num++;
        }
        cout << endl;
    }
} */

void pattern15(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch < 'A' + n - i; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern15(n);
    return 0;
}
