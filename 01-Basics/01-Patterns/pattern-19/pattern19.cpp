#include <bits/stdc++.h>
using namespace std;

void pattern19(int n) {
    // top half
    for (int i = 0; i < n; i++) {
        for (int j = n-i; j >0 ; j--) {
            cout << "*";
        }
        for (int k = 0; k < 2 * i; k++) {
            cout << " ";
        }
        for (int l = n-i; l >0; l++) {
            cout << "*";
        }
        cout << endl;
    }
    // bottom half
    for (int i = 0; i <n ; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int k = 0; k < 2 *(n-i-1); k++){
            cout << " ";
        } 
        for (int l = 0; l <= i; l++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern19(n);
    return 0;
}
