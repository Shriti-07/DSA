#include <bits/stdc++.h>
using namespace std;

void pattern17(int n) {
    char ch;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n - i - 1; k++) {
            cout << " ";
        }
        for (ch='A'; ch<='A'+i; ch++) {
            cout << ch;
        }
        for (char cha=ch-2; cha>='A'; ch--) {
            cout << cha;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern17(n);
    return 0;
}
