#include<bits/stdc++.h>
using namespace std;

void print9(int n) {
    // Upper part
    for (int i = 0; i < n; i++) {
        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part
    for (int i = 0; i < n; i++) {
        // Spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print9(n);
    return 0;
}
