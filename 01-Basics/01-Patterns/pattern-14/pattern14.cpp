#include <bits/stdc++.h>
using namespace std;

/* void pattern14(int n) {
    for (int i = 0; i < n; i++) {
        int num=65;
        for (int j=0;j<=i;j++) {
            cout << char(num);
            num++;
        }
        cout << endl;
    }
} */

void pattern14(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern14(n);
    return 0;
}
